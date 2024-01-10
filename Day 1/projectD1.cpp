//simple tells the birth year of the user

#include <iostream>
#include <string>

int main() {
    // Declare variables
    int currentYear = 2024;
    int age;
    std::string name;

    // Get user input
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Calculate birth year
    int birthYear = currentYear - age;

    // Display personalized message
    std::cout << "\nHello, " << name << "!\n";
    std::cout << "You were born in the year " << birthYear << ".\n";

    return 0;
}


// Explanation:

// 1.int currentYear = 2024;: Declares and initializes a variable currentYear with the current year.

// 2.int age;: Declares a variable age to store the user's age.

// 3.std::string name;: Declares a string variable name to store the user's name.

// 4.std::getline(std::cin, name);: Reads a line of text from the standard input (keyboard) and stores it in the name variable.

// 5.std::cin >> age;: Reads an integer from the standard input and stores it in the age variable.

// 6.int birthYear = currentYear - age;: Calculates the birth year based on the user's age.

// 7.The program then displays a personalized message using the user's name and calculated birth year.