#include <string>
#include <vector>

// function to check if a certain integer exists in the array
int findInteger(const std::vector<int> &arr, int value);

// function to modify the value of an integer in the array
std::pair<int, int> modifyValue(std::vector<int> &arr, int index, int newValue);

// function to add a new integer to the end of the array
void addValue(std::vector<int> &arr, int newValue);

// function to replace a value with 0 or remove it altogether
void replaceOrRemoveValue(std::vector<int> &arr, int index, bool remove);

// function to read data from a file into a vector
std::vector<int> readDataFromFile(const std::string &filename);
