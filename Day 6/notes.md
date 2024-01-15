# Arrays in C++

## Introduction
Arrays are a fundamental concept in programming that allow you to store and manipulate collections of data of the same type. In C++, arrays can be of various types, such as integers, characters, or custom data types.

## Table of Contents
1. [Declaration and Initialization](#declaration-and-initialization)
2. [Accessing Array Elements](#accessing-array-elements)
3. [Practice Question](#practice-question)
4. [Multi-dimensional Arrays](#multi-dimensional-arrays)
5. [Array Size and Bounds](#array-size-and-bounds)

## Declaration and Initialization

Arrays in C++ are declared and initialized as follows:

```cpp
#include <iostream>

int main() {
    // Declaration and Initialization of an integer array
    int myArray[5] = {1, 2, 3, 4, 5};
    
    // Access and print array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element at index " << i << ": " << myArray[i] << std::endl;
    }

    return 0;
}
```

In the code above, we declare an integer array named `myArray` with a size of 5 and initialize it with values 1, 2, 3, 4, and 5. We then use a `for` loop to access and print each element of the array.

## Accessing Array Elements

To access array elements, you can use square brackets `[]` with the index of the element you want to access. Remember that array indices start from 0.

## Practice Question

### Question:
Write a C++ program that finds the sum of all elements in an array.

### Solution:

```cpp
#include <iostream>

int main() {
    const int size = 5;
    int numbers[size] = {10, 20, 30, 40, 50};

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    // Display the result
    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}
```

In the provided solution, we declare an array `numbers` with a size of 5 and initialize it with some values. We then use a `for` loop to iterate through the array and calculate the sum of its elements.

## Multi-dimensional Arrays

C++ supports multi-dimensional arrays, allowing you to create matrices or tables. For example, a 2D array can be declared and initialized as follows:

```cpp
int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
```

## Array Size and Bounds

It's crucial to be mindful of the array size and bounds to prevent accessing elements outside the array's valid indices, which can lead to undefined behavior and program crashes.

Arrays in C++ do not automatically keep track of their size, so you should store the size in a separate variable or use constants.

```cpp
const int size = 5;
int myArray[size] = {1, 2, 3, 4, 5};
```

Added a new code file for a deeper understanding. Happy coding!