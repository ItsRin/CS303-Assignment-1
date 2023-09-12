#include "ArrayFunctions.h"
#include <iostream>

int main() {
  try {
    // read data from file into an array
    std::vector<int> arr = readDataFromFile("data.txt");

    // find integer in the array
    int index = findInteger(arr, 5);
    if (index != -1) {
      std::cout << "Integer found at index: " << index << "\n";
    } else {
      std::cout << "Integer not found in the array.\n";
    }

    // modify the value of an integer in the array
    try {
      auto [oldValue, newValue] = modifyValue(arr, 2, 10);
      std::cout << "Value modified. Old value: " << oldValue
                << ", New value: " << newValue << "\n";
    } catch (const std::exception &e) {
      std::cerr << "Error: " << e.what() << "\n";
    }

    // add a new integer to the end of the array
    try {
      addValue(arr, 20);
      std::cout << "Value added to the end of the array.\n";
    } catch (const std::exception &e) {
      std::cerr << "Error: " << e.what() << "\n";
    }

    // replace or remove value
    replaceOrRemoveValue(arr, 3, false);
    std::cout << "Value at index 3 replaced with 0.\n";

  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
  }

  return 0;
}
