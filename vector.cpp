#include <iostream>
#include <vector>

int main() {
    // Create an empty vector
    std::vector<int> myVector;

    // Add elements to the vector (append)
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Print the elements of the vector
    std::cout << "Elements of the vector: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Access a specific element of the vector
    std::cout << "Element at index 1: " << myVector[1] << std::endl;

    // Modify an element of the vector
    myVector[1] = 200;

    // Print the modified vector
    std::cout << "Modified vector: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Get the size of the vector
    std::cout << "Size of the vector: " << myVector.size() << std::endl;

    // Remove the last element from the vector
    myVector.pop_back();

    // Print the vector after removing an element
    std::cout << "Vector after removing an element: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

