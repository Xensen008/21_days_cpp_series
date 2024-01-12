# Conditional Statements in C++

## Introduction:

Conditional statements in C++ allow you to make decisions in your program based on certain conditions. These statements alter the flow of program execution based on whether a given condition is true or false.

## Types of Conditional Statements:

1. **if statement:**
   - Syntax:
     ```cpp
     if (condition) {
         // code to be executed if the condition is true
     }
     ```

2. **if-else statement:**
   - Syntax:
     ```cpp
     if (condition) {
         // code to be executed if the condition is true
     } else {
         // code to be executed if the condition is false
     }
     ```

3. **if-else if-else statement:**
   - Syntax:
     ```cpp
     if (condition1) {
         // code to be executed if condition1 is true
     } else if (condition2) {
         // code to be executed if condition2 is true
     } else {
         // code to be executed if all conditions are false
     }
     ```

## Examples:

### Example 1: Simple if statement

```cpp
#include <iostream>

int main() {
    int x = 10;

    if (x > 5) {
        std::cout << "x is greater than 5." << std::endl;
    }

    return 0;
}
```

### Example 2: if-else statement

```cpp
#include <iostream>

int main() {
    int y = 3;

    if (y % 2 == 0) {
        std::cout << "y is even." << std::endl;
    } else {
        std::cout << "y is odd." << std::endl;
    }

    return 0;
}
```

### Example 3: if-else if-else statement

```cpp
#include <iostream>

int main() {
    int grade = 75;

    if (grade >= 90) {
        std::cout << "A" << std::endl;
    } else if (grade >= 80) {
        std::cout << "B" << std::endl;
    } else if (grade >= 70) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }

    return 0;
}
```

## Conclusion:

Conditional statements are crucial for controlling the flow of your C++ programs. They help in executing specific code blocks based on specified conditions.

