# C++ Templates Readme

## Table of Contents
1. [Introduction](#introduction)
2. [Definition](#definition)
3. [Usage](#usage)
    - [Function Templates](#function-templates)
    - [Class Templates](#class-templates)
4. [Examples](#examples)
    - [Function Template Example](#function-template-example)
    - [Class Template Example](#class-template-example)
5. [Best Practices](#best-practices)
6. [Contributing](#contributing)
7. [License](#license)

## Introduction

Welcome to the C++ Templates project! This project explores the powerful feature of templates in C++, a mechanism that allows the creation of generic functions and classes.

## Definition

In C++, templates provide a way to write generic programs, allowing types to be parameters when defining classes and functions. This enables you to create flexible and reusable code that can work with different data types without sacrificing performance or safety.

## Usage

### Function Templates

Function templates allow you to write functions that can work with any data type. The syntax for a function template looks like this:

```cpp
template <typename T>
T add(T a, T b) {
    return a + b;
}
```

### Class Templates

Class templates extend the concept to classes, enabling the creation of generic classes. Here's an example:

```cpp
template <typename T>
class Container {
public:
    T value;
    void setValue(T val) {
        value = val;
    }
};
```

## Examples

Let's dive into some examples to illustrate how to use templates in your C++ projects.

### Function Template Example

```cpp
#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int result1 = add(5, 10);
    double result2 = add(3.5, 2.7);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}
```

### Class Template Example

```cpp
#include <iostream>

template <typename T>
class Container {
public:
    T value;
    void setValue(T val) {
        value = val;
    }
};

int main() {
    Container<int> intContainer;
    intContainer.setValue(42);
    
    Container<std::string> stringContainer;
    stringContainer.setValue("Hello, C++!");

    std::cout << "Int Container Value: " << intContainer.value << std::endl;
    std::cout << "String Container Value: " << stringContainer.value << std::endl;

    return 0;
}
```



