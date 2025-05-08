//examples
//--------
#include <iostream>
#include <array>

int main() {
    // Create an array with 5 elements
    std::array<int, 5> myArray = {10, 20, 30, 40, 50};

    // Access and print elements of the array
    std::cout << "Elements of the array: ";
    for (const auto& element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Access and print a specific element of the array
    std::cout << "Element at index 2: " << myArray[2] << std::endl;

    // Modify an element of the array
    myArray[2] = 300;

    // Print the modified array
    std::cout << "Modified array: ";
    for (const auto& element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Get the size of the array
    std::cout << "Size of the array: " << myArray.size() << std::endl;

    return 0;
}

