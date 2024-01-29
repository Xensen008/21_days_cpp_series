#include <iostream>
#include <thread>
#include <mutex>

int counter = 0;
std::mutex counterMutex;

void incrementCounter(int threadId, int iterations) {
    for (int i = 0; i < iterations; ++i) {
        std::lock_guard<std::mutex> lock(counterMutex);
        counter++;
        std::cout << "Thread " << threadId << " - Counter: " << counter << std::endl;
    }
}
int main() {
    int iterations = 5;
    std::thread t1(incrementCounter, 1, iterations);
    std::thread t2(incrementCounter, 2, iterations);
    t1.join();
    t2.join();

    return 0;
}
