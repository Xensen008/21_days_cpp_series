#include <iostream>
#include <vector>

class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Dog barks." << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        std::cout << "Cat meows." << std::endl;
    }
};

class Bird : public Animal {
public:
    void makeSound() const override {
        std::cout << "Bird chirps." << std::endl;
    }
};

int main() {
    std::vector<Animal*> animals;

    Dog dog;
    Cat cat;
    Bird bird;

    animals.push_back(&dog);
    animals.push_back(&cat);
    animals.push_back(&bird);

    std::cout << "Animal sounds:" << std::endl;

    for (const auto& animal : animals) {
        animal->makeSound();
    }

    return 0;
}
