//Write a program to read data from a file and display it on the console.
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the file for reading
    std::ifstream inputFile("example.txt", std::ios::in);

    // Check if the file is open
    if (inputFile.is_open()) {
        std::string line;

        // Read and display each line from the file
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }

        // Close the file
        inputFile.close();
    } else {
        // Display an error message if the file couldn't be opened
        std::cerr << "Unable to open the file." << std::endl;
    }

    return 0;
}


/*This program does the following:

Opens a file named "example.txt" for reading using std::ifstream.
Checks if the file is open. If not, it displays an error message.
Reads each line from the file using std::getline and displays it on the console.
Closes the file.
Make sure to replace "example.txt" with the actual name of the file you want to read. Also, ensure that the file is in the same directory as the executable or provide the full path to the file.

Compile and run the program, and it will read the contents of the specified file and display them on the console.

*/