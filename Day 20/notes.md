# Concurrency in C++

## Introduction:

Concurrency is the execution of multiple tasks simultaneously. In C++, this is commonly achieved through the use of threads.

## Definition:

Concurrency is a programming concept that deals with the execution of multiple tasks simultaneously. In C++, concurrency is typically achieved using threads. A thread is a lightweight process that runs independently but shares resources, such as memory, with other threads within the same process.

## Example using Threads:

```cpp
#include <iostream>
#include <thread>

// Function to be executed by the thread
void printNumbers() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Thread: " << std::this_thread::get_id() << " - " << i << std::endl;
    }
}

int main() {
    // Creating two threads
    std::thread t1(printNumbers);
    std::thread t2(printNumbers);

    // Joining threads with the main thread
    t1.join();
    t2.join();

    return 0;
}
```

In this example, two threads (`t1` and `t2`) are created, and both execute the `printNumbers` function concurrently. The `std::this_thread::get_id()` function is used to retrieve the ID of the current thread.


#### Example:

The provided example demonstrates the basic usage of threads in C++. Two threads are created, and they concurrently execute the `printNumbers` function, displaying numbers from 1 to 5 along with their respective thread IDs.

#### Code Explanation:

1. **Include Necessary Headers:**
   ```cpp
   #include <iostream>
   #include <thread>
   ```
   
2. **Define Function for Threads:**
   ```cpp
   void printNumbers() {
       // Function to be executed by the thread
       for (int i = 1; i <= 5; ++i) {
           std::cout << "Thread: " << std::this_thread::get_id() << " - " << i << std::endl;
       }
   }
   ```

3. **Main Function:**
   ```cpp
   int main() {
       // Creating two threads
       std::thread t1(printNumbers);
       std::thread t2(printNumbers);

       // Joining threads with the main thread
       t1.join();
       t2.join();

       return 0;
   }
   ```

4. **Execution:**
   - Two threads (`t1` and `t2`) are created.
   - Both threads execute the `printNumbers` function concurrently, displaying numbers along with their thread IDs.
   - The `join()` function is used to synchronize the main thread with the spawned threads.

### Concepts:

- **Thread Creation:**
  Threads are created using the `std::thread` class.

- **Thread Execution:**
  Each thread executes a specific function concurrently.

- **Thread ID:**
  The `std::this_thread::get_id()` function retrieves the unique ID of the current thread.

- **Thread Synchronization:**
  The `join()` function is used to wait for the threads to finish their execution before proceeding with the main thread.

### Conclusion:

Concurrency in C++ through threads allows for parallel execution of tasks, potentially improving performance and responsiveness in applications. Understanding thread creation, synchronization, and proper resource management is crucial for effective concurrent programming.