

# Standard C++ Libraries

## Introduction

Welcome to Day 21 of your coding challenge! Today's focus is on Standard C++ Libraries, an essential part of C++ programming. These libraries provide a set of pre-built functionalities that can be easily incorporated into your programs. In this README, we will explore the purpose of three important C++ headers: `iostream`, `cmath`, and `algorithm`.

## iostream Header

### Definition:
The `iostream` header in C++ stands for input-output stream. It provides classes like `cin` and `cout` that allow you to perform input and output operations in C++.

### Code Explanation:
```cpp
#include <iostream>

int main() {
    // Output to console
    std::cout << "Hello, World!" << std::endl;

    // Input from console
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    return 0;
}
```

### Example:
```cpp
#include <iostream>

int main() {
    int x = 10;
    std::cout << "The value of x is: " << x << std::endl;

    return 0;
}
```

## cmath Header

### Definition:
The `cmath` header provides mathematical functions for tasks like rounding, logarithmic, trigonometric, and exponential operations.

### Code Explanation:
```cpp
#include <cmath>

int main() {
    // Using math functions
    double result = std::sqrt(25.0);  // Square root
    double power = std::pow(2.0, 3.0);  // Power

    return 0;
}
```

### Example:
```cpp
#include <cmath>

int main() {
    double angle = 45.0;
    double radians = std::to_radians(angle);  // Convert degrees to radians

    return 0;
}
```

## algorithm Header

### Definition:
The `algorithm` header contains a collection of functions that operate on ranges of elements. It is a powerful tool for performing operations on containers like vectors, arrays, etc.

### Code Explanation:
```cpp
#include <algorithm>
#include <vector>

int main() {
    // Using algorithms on vectors
    std::vector<int> numbers = {5, 2, 8, 1, 7};
    std::sort(numbers.begin(), numbers.end());  // Sort the vector

    return 0;
}
```

### Example:
```cpp
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 7};
    
    // Find the maximum element in the vector
    int max_value = *std::max_element(numbers.begin(), numbers.end());

    return 0;
}
```

## Conclusion

Understanding and effectively using these standard C++ libraries can significantly enhance your programming capabilities. Feel free to experiment with different functions and explore the vast array of features these libraries offer. Good luck with the rest of your coding challenge!