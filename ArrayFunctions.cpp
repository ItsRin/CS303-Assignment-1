#include "ArrayFunctions.h"
#include <fstream>
#include <stdexcept>

int findInteger(const std::vector<int>& arr, int value) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

std::pair<int, int> modifyValue(std::vector<int>& arr, int index, int newValue) {
    if (index < 0 || index >= arr.size()) {
        throw std::out_of_range("Index out of range");
    }
    int oldValue = arr[index];
    arr[index] = newValue;
    return { oldValue, newValue };
}

void addValue(std::vector<int>& arr, int newValue) {
    arr.push_back(newValue);
}

void replaceOrRemoveValue(std::vector<int>& arr, int index, bool remove) {
    if (index < 0 || index >= arr.size()) {
        throw std::out_of_range("Index out of range");
    }
    if (remove) {
        arr.erase(arr.begin() + index);
    }
    else {
        arr[index] = 0;
    }
}

std::vector<int> readDataFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file");
    }

    std::vector<int> arr;
    int value;
    while (file >> value) {
        arr.push_back(value);
    }
    return arr;
}
