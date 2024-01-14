#include <iostream>

// Function Declaration
int calculateFactorial(int n);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Function Call
    int result = calculateFactorial(num);

    std::cout << "Factorial of " << num << " is: " << result << std::endl;

    return 0;
}

// Function Definition
int calculateFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}
