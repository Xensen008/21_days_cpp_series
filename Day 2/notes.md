

# C++ Input and Output (I/O) Basics

Welcome to Day 2 of the 21 Days of C++ Challenge! Today, we'll explore the fundamental concepts of Input and Output in C++. Input and output operations are essential for communication between a program and the user or external systems.

## Input in C++

### Definition:
Input in C++ refers to the process of taking data or information from external sources (e.g., user, files) and making it available for the program to use.

### Examples:

#### 1. Standard Input (cin):
```cpp
#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "You entered: " << number << std::endl;

    return 0;
}
```

#### 2. File Input:
```cpp
#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("input.txt");
    
    if (inputFile.is_open()) {
        int number;
        inputFile >> number;
        
        std::cout << "Read from file: " << number << std::endl;

        inputFile.close();
    } else {
        std::cerr << "Unable to open file!" << std::endl;
    }

    return 0;
}
```

## Output in C++

### Definition:
Output in C++ refers to the process of displaying information or results from the program to external devices (e.g., console, files).

### Examples:

#### 1. Standard Output (cout):
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, C++!" << std::endl;

    return 0;
}
```

#### 2. File Output:
```cpp
#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("output.txt");
    
    if (outputFile.is_open()) {
        outputFile << "Writing to a file in C++." << std::endl;
        outputFile.close();
        std::cout << "Data written to file successfully." << std::endl;
    } else {
        std::cerr << "Unable to open file!" << std::endl;
    }

    return 0;
}
```

## Conclusion:

Understanding input and output operations is crucial for building interactive and dynamic C++ programs. Explore the provided examples and feel free to modify and experiment with them to deepen your understanding.

Happy coding!
