#include <iostream>

// Base class
class Vehicle {
public:
    virtual void startEngine() const {
        std::cout << "Vehicle engine started." << std::endl;
    }
};

// Derived class Car
class Car : public Vehicle {
public:
    void startEngine() const override {
        std::cout << "Car engine started." << std::endl;
    }
};

// Derived class Motorcycle
class Motorcycle : public Vehicle {
public:
    void startEngine() const override {
        std::cout << "Motorcycle engine started." << std::endl;
    }
};

int main() {
    // Create objects of Car and Motorcycle classes
    Car myCar;
    Motorcycle myMotorcycle;

    // Call startEngine() on the objects
    myCar.startEngine();
    myMotorcycle.startEngine();

    return 0;
}
