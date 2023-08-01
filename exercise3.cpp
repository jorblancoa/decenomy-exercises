#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// Custom comparison function for sorting
bool compare(const std::string& num1, const std::string& num2) {
    return (num1 + num2) > (num2 + num1);
}

int highest_number(const std::vector<int>& nums) {
    // Convert the integers to strings for comparison
    std::vector<std::string> numStrings;
    for (int num : nums) {
        numStrings.push_back(std::to_string(num));
    }

    // Sort the strings using the custom comparison function
    std::sort(numStrings.begin(), numStrings.end(), compare);

    // Concatenate the sorted strings to form the highest possible number
    std::string result;
    for (const std::string& str : numStrings) {
        result += str;
    }

    // Convert the concatenated string back to an integer
    return std::stoi(result);
}

int main() {
    std::vector<int> nums = {10, 7, 76, 415};
    int highestNum = highest_number(nums);
    std::cout << "Highest possible number: " << highestNum << std::endl;

    return 0;
}