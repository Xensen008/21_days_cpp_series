#include <iostream>
#include <memory>

class Resource {
public:
    Resource(int value) : data(value) {
        std::cout << "Resource created with value: " << data << std::endl;
    }

    ~Resource() {
        std::cout << "Resource destroyed with value: " << data << std::endl;
    }

    void processData() {
        std::cout << "Processing data: " << data << std::endl;
    }

private:
    int data;
};

int main() {
    // Using std::unique_ptr
    std::cout << "Using std::unique_ptr:" << std::endl;
    std::unique_ptr<Resource> uniquePtr = std::make_unique<Resource>(42);
    uniquePtr->processData();

    // Uncommenting the line below will result in a compilation error,
    // demonstrating unique ownership.
    // std::unique_ptr<Resource> anotherUniquePtr = uniquePtr; 

    // Using std::shared_ptr
    std::cout << "\nUsing std::shared_ptr:" << std::endl;
    std::shared_ptr<Resource> sharedPtr1 = std::make_shared<Resource>(42);
    std::shared_ptr<Resource> sharedPtr2 = sharedPtr1;
    sharedPtr1->processData();
    sharedPtr2->processData();

    // Shared ownership allows multiple pointers to manage the resource.

    return 0;
}
