//this program is about if else statements and how to use them in cpp
// Created by Arnab on 12-01-2024.

#include <iostream>

int main() {
    // Practice question 1: Check if a number is positive, negative, or zero.
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (num < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    // Practice question 2: Determine the largest of three numbers.
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        std::cout << "The largest number is: " << a << std::endl;
    } else if (b >= a && b >= c) {
        std::cout << "The largest number is: " << b << std::endl;
    } else {
        std::cout << "The largest number is: " << c << std::endl;
    }

    return 0;
}
