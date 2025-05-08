#include <iostream>
#include <vector>

int main() {
  std::vector<int> myVector = {2, 3, 4};

  myVector.insert(myVector.begin(), 1); // Insert 1 at the beginning

  // Print the vector
  for (int element : myVector) {
    std::cout << element << " ";
  }
  // Output: 1 2 3 4
  std::cout << std::endl;
  return 0;
}