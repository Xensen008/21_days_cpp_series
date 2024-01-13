#include <iostream>

int main() {
    int number;

    // Ask the user to input a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Display the multiplication table using for loop
    std::cout << "\nMultiplication Table using for loop:\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " * " << i << " = " << (number * i) << std::endl;
    }

    // Display the multiplication table using while loop
    std::cout << "\nMultiplication Table using while loop:\n";
    int i = 1;
    while (i <= 10) {
        std::cout << number << " * " << i << " = " << (number * i) << std::endl;
        ++i;
    }

    // Display the multiplication table using do-while loop
    std::cout << "\nMultiplication Table using do-while loop:\n";
    i = 1;
    do {
        std::cout << number << " * " << i << " = " << (number * i) << std::endl;
        ++i;
    } while (i <= 10);

    return 0;
}
