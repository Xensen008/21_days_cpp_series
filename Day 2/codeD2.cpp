// Example Program:

//Today's task involves creating a simple C++ program that takes two numbers as input, performs their sum, and outputs the result.

#include <iostream>

int main() {
    // Declare variables to store the input numbers
    double num1, num2;

    // Prompt the user for input
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the sum
    double sum = num1 + num2;

    // Display the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}


/*### Explanation:

- The program declares two variables `num1` and `num2` to store the user's input.
- The `std::cin` is used to take input from the user for both numbers.
- The sum of the two numbers is calculated and stored in the `sum` variable.
- Finally, the result is displayed using `std::cout`.*/