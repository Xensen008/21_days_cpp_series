#include <iostream>

class Rectangle {
private:
    // Attributes
    double length;
    double width;

public:
    // Parameterized constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Member function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Creating an object of the Rectangle class
    Rectangle myRectangle(5.0, 3.0);

    // Calculating and displaying the area
    double area = myRectangle.calculateArea();
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
