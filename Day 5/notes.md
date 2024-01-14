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


### Additional Resources

- [C++ Functions - GeeksforGeeks](https://www.geeksforgeeks.org/functions-in-cpp/)
- [C++ Functions - Tutorialspoint](https://www.tutorialspoint.com/cplusplus/cpp_functions.htm)
