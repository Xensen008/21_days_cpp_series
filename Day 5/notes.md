# C++ Functions Learning Challenge

## Day 5: Functions in C++

### Introduction

In C++, functions are reusable blocks of code that perform a specific task. They provide modularity to the program, making it easier to understand, debug, and maintain. This document will cover the basics of functions, their syntax, and provide examples to illustrate their usage.

### Function Syntax

```cpp
// Function Declaration
return_type function_name(parameters);

// Function Definition
return_type function_name(parameters) {
    // Function Body
    // Code to be executed
    return result; // Optional, based on the return type
}
```

### Example: Function to Calculate Factorial

```cpp
#include <iostream>

// Function Declaration
int calculateFactorial(int n);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Function Call
    int result = calculateFactorial(num);

    std::cout << "Factorial of " << num << " is: " << result << std::endl;

    return 0;
}

// Function Definition
int calculateFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}
```

### Explanation

- **Function Declaration**: Declaring the function prototype before it is used in the main program.
- **Function Definition**: Defining the actual code for the function.

Certainly! Here are a few more questions related to functions in C++, along with their corresponding code:

### Question 1: Find the Maximum of Two Numbers

Write a C++ program that defines a function to find and return the maximum of two numbers. Take input from the user and display the result.

**max_number.cpp**

```cpp
#include <iostream>

// Function Declaration
int findMax(int num1, int num2);

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Function Call
    int maxResult = findMax(num1, num2);

    std::cout << "Maximum of " << num1 << " and " << num2 << " is: " << maxResult << std::endl;

    return 0;
}

// Function Definition
int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}
```

### Question 2: Check if a Number is Prime

Write a C++ program that defines a function to check if a given number is prime. Display the result to the user.

**prime_check.cpp**

```cpp
#include <iostream>

// Function Declaration
bool isPrime(int num);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Function Call
    if (isPrime(num))
        std::cout << num << " is a prime number." << std::endl;
    else
        std::cout << num << " is not a prime number." << std::endl;

    return 0;
}

// Function Definition
bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }

    return true;
}
```

### Question 3: Calculate the Power of a Number

Write a C++ program that defines a function to calculate the power of a number. Take base and exponent inputs from the user and display the result.

**power_calculation.cpp**

```cpp
#include <iostream>

// Function Declaration
double calculatePower(double base, int exponent);

int main() {
    double base;
    int exponent;
    
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    // Function Call
    double result = calculatePower(base, exponent);

    std::cout << base << " ^ " << exponent << " is: " << result << std::endl;

    return 0;
}

// Function Definition
double calculatePower(double base, int exponent) {
    if (exponent == 0)
        return 1;

    double result = 1.0;
    for (int i = 1; i <= abs(exponent); ++i) {
        result *= base;
    }

    return (exponent < 0) ? 1 / result : result;
}
```

Feel free to use these examples to practice and deepen your understanding of functions in C++.

### Additional Resources

- [C++ Functions - GeeksforGeeks](https://www.geeksforgeeks.org/functions-in-cpp/)
- [C++ Functions - Tutorialspoint](https://www.tutorialspoint.com/cplusplus/cpp_functions.htm)
