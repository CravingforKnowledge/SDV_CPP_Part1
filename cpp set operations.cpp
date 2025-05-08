#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;

    // Insertion
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(8);
    mySet.insert(2); // Duplicate, will not be inserted

    // Traversal
    std::cout << "Set elements: ";
    for (const int& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Search
    auto it = mySet.find(9); //mySet.find(5);
    if (it != mySet.end()) {
        std::cout << "Element 5 found" << std::endl;
    } else {
        std::cout << "Element 5 not found" << std::endl;
    }

    // Deletion
    mySet.erase(2);

    // Traversal after deletion
    std::cout << "Set elements after deleting 2: ";
    for (const int& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}