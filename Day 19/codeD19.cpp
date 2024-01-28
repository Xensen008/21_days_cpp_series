//Write a lambda expression to find the square of a number.
#include <iostream>

int main() {
    auto square = [](int%20x) -> int {
        return x * x;
    };

    int number = 7;
    int result = square(number);

    std::cout << "The square of " << number << " is: " << result << std::endl;

    return 0;
}
