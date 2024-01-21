

# C++ Polymorphism Readme

## Overview

Welcome to the Polymorphism in C++ tutorial! In this tutorial, we'll explore the concept of polymorphism in C++, discussing both compile-time and runtime polymorphism. Polymorphism is a fundamental concept in object-oriented programming (OOP) that allows objects of different types to be treated as objects of a common base type.

## Table of Contents

1. [What is Polymorphism?](#what-is-polymorphism)
2. [Types of Polymorphism](#types-of-polymorphism)
   - [Compile-Time Polymorphism](#compile-time-polymorphism)
   - [Runtime Polymorphism](#runtime-polymorphism)
3. [Example Code](#example-code)
   - [Compile-Time Polymorphism Example](#compile-time-polymorphism-example)
   - [Runtime Polymorphism Example](#runtime-polymorphism-example)
4. [How to Compile and Run](#how-to-compile-and-run)
5. [Conclusion](#conclusion)

## What is Polymorphism?

Polymorphism is a core concept in OOP that allows objects to be treated as instances of their parent class, enabling flexibility and extensibility in software design. In C++, polymorphism is achieved through function overloading, operator overloading, and virtual functions.

## Types of Polymorphism

### Compile-Time Polymorphism

Compile-time polymorphism, also known as static polymorphism, is achieved during the compile phase of the program. It involves the use of function overloading and operator overloading. The compiler determines which function or operator to call based on the number and types of arguments.

### Runtime Polymorphism

Runtime polymorphism, also known as dynamic polymorphism, is achieved during runtime. It involves the use of virtual functions and is implemented through pointers and references. The decision about which function to call is made at runtime based on the actual type of the object.

## Example Code

### Compile-Time Polymorphism Example

```cpp
#include <iostream>

class MathOperations {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    MathOperations math;
    
    std::cout << "Integer Addition: " << math.add(5, 7) << std::endl;
    std::cout << "Double Addition: " << math.add(3.14, 2.71) << std::endl;

    return 0;
}
```

### Runtime Polymorphism Example

```cpp
#include <iostream>

class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a generic shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;

    return 0;
}
```

## How to Compile and Run

To compile and run the examples, use a C++ compiler such as g++:

```bash
g++ -o compile_time_polymorphism compile_time_polymorphism.cpp
g++ -o runtime_polymorphism runtime_polymorphism.cpp
```

Run the compiled programs:

```bash
./compile_time_polymorphism
./runtime_polymorphism
```

## Conclusion

Polymorphism is a powerful concept in C++ that enhances code flexibility and maintainability. Understanding both compile-time and runtime polymorphism is crucial for effective object-oriented programming. Happy coding!