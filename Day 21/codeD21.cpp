#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;


    std::cout << "You entered: " << number << std::endl;

    // cmath Header
    double result = std::sqrt(25.0);  // Square root
    double power = std::pow(2.0, 3.0);  // Power

    std::cout << "Square root of 25: " << result << std::endl;
    std::cout << "2^3: " << power << std::endl;

    // algorithm Header
    std::vector<int> numbers = {5, 2, 8, 1, 7};

    // Sorting the vector
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Finding the maximum element
    int max_value = *std::max_element(numbers.begin(), numbers.end());

    std::cout << "Maximum element: " << max_value << std::endl;

    return 0;
}
