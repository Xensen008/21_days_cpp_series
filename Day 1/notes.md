# Getting Started with C++: My First Program
### Welcome to the world of C++ programming! Let's start by writing your first C++ program. In programming tradition, the first program you write outputs the phrase "Hello, World!" to the console.

## My First C++ Program

```cpp
#include <iostream>

int main() {
    // Display "Hello, World!" to the console
    std::cout << "Hello, World!" << std::endl;

    // Your program ends here
    return 0;
}
```

### Explanation

- `#include <iostream>`: This line includes the Input/Output Stream library, which allows you to perform input and output operations.

- `int main()`: This is the main function where your program starts executing. Every C++ program must have a `main` function.

- `std::cout << "Hello, World!" << std::endl;`: This line prints the "Hello, World!" message to the console. `std::cout` is used for output, and `std::endl` is used to insert a newline character.

- `return 0;`: This line indicates that your program has executed successfully. The value `0` is returned to the operating system.

## Variables and Data Types

### Definition

Now that you've written your first program, let's dive into the basics of variables and data types.

A **variable** is a named storage location in a program, and **data types** define the nature of the data that a variable can hold.

### Example

```cpp
#include <iostream>

int main() {
    // Declare and initialize variables
    int age = 25;
    std::string name = "John Doe";
    bool is_student = true;
    float average_grade = 87.5;

    // Display variables to the console
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Is Student: " << std::boolalpha << is_student << std::endl;
    std::cout << "Average Grade: " << average_grade << std::endl;

    return 0;
}
```

### Explanation

- `int age = 25;`: Declares an integer variable `age` and initializes it with the value `25`.
  
- `std::string name = "John Doe";`: Declares a string variable `name` and initializes it with the value `"John Doe"`.
  
- `bool is_student = true;`: Declares a boolean variable `is_student` and initializes it with the value `true`.
  
- `float average_grade = 87.5;`: Declares a float variable `average_grade` and initializes it with the value `87.5`.

- `std::cout << ...;`: Prints the values of the variables to the console.

Remember, this is just the beginning of your C++ journey. Experiment with different variables and data types to strengthen your understanding. Happy coding!
