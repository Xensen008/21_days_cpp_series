//Write a C++ program that takes two strings as input from the user and concatenates them. Display the concatenated string as the output.

#include <iostream>
#include <string>

int main() {
    // Declare two string variables to store user input
    std::string firstString, secondString;

    // Get user input for the first string
    std::cout << "Enter the first string: ";
    std::getline(std::cin, firstString);

    // Get user input for the second string
    std::cout << "Enter the second string: ";
    std::getline(std::cin, secondString);

    // Concatenate the two strings
    std::string result = firstString + secondString;

    // Display the concatenated string
    std::cout << "Concatenated String: " << result << std::endl;

    return 0;
}


/*Explanation:
We include the necessary headers for input/output and string manipulation (<iostream> and <string>).
Declare two std::string variables, firstString and secondString, to store user input.
Use std::getline to get input from the user for both strings.
Concatenate the two strings using the + operator and store the result in the result variable.
Display the concatenated string using std::cout.*/