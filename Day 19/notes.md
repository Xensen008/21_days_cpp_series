# Lambda Expressions in C++

## Introduction

Lambda expressions, introduced in C++11, provide a concise way to define anonymous functions (also known as lambda functions) within your C++ code. This feature is particularly useful when you need to create small, inline functions without the need to explicitly define a separate function. Lambdas can be used in various contexts, such as algorithms, functions, and more.

## Definition

A lambda expression has the following general syntax:

```cpp
[capture](parameters) -> return_type {
    // body of the lambda function
}
```

- **Capture**: Specifies which outside variables are accessible inside the lambda.
- **Parameters**: Similar to the parameters of a regular function.
- **Return Type**: The return type of the lambda function.
- **Body**: The code block containing the actual implementation of the lambda function.

## Example

Here's a simple example to demonstrate the basic structure of a lambda expression:

```cpp
#include <iostream>

int main() {
    // Lambda expression that takes two integers and returns their sum
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    // Using the lambda function
    int result = add(5, 7);
    
    std::cout << "Result: " << result << std::endl;

    return 0;
}
```

In this example:
- The lambda expression is assigned to the variable `add`.
- It takes two parameters (`int a` and `int b`).
- It specifies the return type as `int`.
- The body of the lambda adds the two parameters and returns the result.
- Finally, the lambda function is called with arguments 5 and 7, and the result is printed.

## Capture Clause

The capture clause allows you to use variables from the surrounding scope within the lambda. There are different ways to capture variables:

- **[ ]**: No capture, lambda cannot use any outside variables.
- **[=]**: Capture all variables by value.
- **[&]**: Capture all variables by reference.
- **[x, &y]**: Capture `x` by value and `y` by reference.
- **[=, &z]**: Capture all variables by value, but capture `z` by reference.

```cpp
#include <iostream>

int main() {
    int x = 5;
    int y = 10;

    // Capture by value and reference
    auto lambda = [x, &y]() {
        // x is captured by value, y by reference
        std::cout << "x: " << x << ", y: " << y << std::endl;
    };

    // Execute the lambda
    lambda();

    return 0;
}
```

## Conclusion

Lambda expressions in C++ provide a concise and convenient way to create small, inline functions. They enhance code readability and are especially useful in scenarios where creating a separate named function is unnecessary. The ability to capture variables from the surrounding scope adds flexibility to the use of lambda expressions.