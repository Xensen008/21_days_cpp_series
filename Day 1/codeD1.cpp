// 1. Hello, World!

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}


// 2. Variables and Arithmetic
#include <iostream>
int main() {
    // Declare and initialize variables
    int num1 = 10;
    int num2 = 5;

    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = static_cast<float>(num1) / num2;

    // Display results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}



