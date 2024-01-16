#include <iostream>

int main() {
    // Example 1: Pointer Arithmetic
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;

    // Question: Increment the pointer and print the next value in the array.
    ++ptr;
    std::cout << "Value after incrementing the pointer: " << *ptr << std::endl;

    // Example 2: Pointers and Functions
    int x = 10, y = 20;

    // Question: Write a function that swaps the values of two integers using pointers.
    void swapValues(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    // Before swapping
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    // Swap values using the function
    swapValues(&x, &y);

    // After swapping
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}
