#include <iostream>
#include <stdexcept>

int main() {
    try {
        std::cout << "Enter an integer: ";
        std::string userInput;
        std::cin >> userInput;

        // Attempt to convert the user input to an integer
        int number = std::stoi(userInput);

        std::cout << "You entered: " << number << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: Invalid argument - " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Error: Out of range - " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}
