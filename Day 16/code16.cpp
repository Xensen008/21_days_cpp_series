#include <iostream>
#include <vector>
#include <string>

int main() {
    // Create a vector to store names
    std::vector<std::string> names;

    // Add names to the vector
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");
    names.push_back("David");

    // Display the names using iterators
    std::cout << "List of Names:" << std::endl;
    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
