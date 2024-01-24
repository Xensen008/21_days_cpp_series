#include <iostream>

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    
    int x = 5, y = 10;
    std::cout << "Before swap - x: " << x << ", y: " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swap - x: " << x << ", y: " << y << std::endl;

    
    double a = 3.14, b = 2.71;
    std::cout << "Before swap - a: " << a << ", b: " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swap - a: " << a << ", b: " << b << std::endl;

   
    std::string str1 = "Hello", str2 = "World";
    std::cout << "Before swap - str1: " << str1 << ", str2: " << str2 << std::endl;
    swapValues(str1, str2);
    std::cout << "After swap - str1: " << str1 << ", str2: " << str2 << std::endl;

    return 0;
}
