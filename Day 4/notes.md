# Loops in C++

## Introduction

In programming, loops are constructs that allow you to execute a block of code repeatedly. They are crucial for automating repetitive tasks and are an essential part of any programming language. C++ provides three main types of loops: `for`, `while`, and `do-while`.

## Loop Types

### 1. For Loop

The `for` loop is used when you know the number of iterations in advance. It consists of three parts: initialization, condition, and increment/decrement.

**Syntax:**

```cpp
for (initialization; condition; increment/decrement) {
    // code to be executed
}
```

**Example:**

```cpp
#include <iostream>

int main() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Iteration " << i << std::endl;
    }

    return 0;
}
```

### 2. While Loop

The `while` loop is used when you don't know the number of iterations beforehand. It continues executing the code block as long as the specified condition is true.

**Syntax:**

```cpp
while (condition) {
    // code to be executed
}
```

**Example:**

```cpp
#include <iostream>

int main() {
    int i = 1;
    while (i <= 5) {
        std::cout << "Iteration " << i << std::endl;
        ++i;
    }

    return 0;
}
```

### 3. Do-While Loop

The `do-while` loop is similar to the `while` loop but guarantees that the code block is executed at least once before checking the condition.

**Syntax:**

```cpp
do {
    // code to be executed
} while (condition);
```

**Example:**

```cpp
#include <iostream>

int main() {
    int i = 1;
    do {
        std::cout << "Iteration " << i << std::endl;
        ++i;
    } while (i <= 5);

    return 0;
}
```