//question: Write a function that returns the maximum element in a array of integers.
#include <iostream>

int findMaxElement(const int arr[], int size) {
    if (size <= 0) {
        // Handle invalid array size
        std::cerr << "Error: Invalid array size." << std::endl;
        return -1;  // Returning -1 to indicate an error
    }

    int maxElement = arr[0];  // Assume the first element is the maximum

    // Iterate through the array to find the maximum element
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    const int size = 7;
    int numbers[size] = {23, 56, 12, 890, 34, 67, 45};

    // Find the maximum element in the array
    int maxElement = findMaxElement(numbers, size);

    if (maxElement != -1) {
        std::cout << "The maximum element in the array is: " << maxElement << std::endl;
    }

    return 0;
}
