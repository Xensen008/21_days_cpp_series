//Create a structure representing a student with attributes like name, age, and grade.
#include <iostream>
#include <string>

// Definition of the Student structure
struct Student {
    std::string name;
    int age;
    char grade;
};

int main() {
    // Declaration and initialization of a Student variable
    Student student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.grade = 'A';

    // Accessing and printing structure members
    std::cout << "Student Information:" << std::endl;
    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Age: " << student1.age << std::endl;
    std::cout << "Grade: " << student1.grade << std::endl;

    return 0;
}
