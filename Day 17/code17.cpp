#include <iostream>
#include <vector>

int main() {
   
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    
    std::cout << "Vector elements using iterators: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    
    std::cout << "Vector elements using auto keyword: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

   
    std::cout << "Vector elements using range-based for loop: ";
    for (const auto &num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
