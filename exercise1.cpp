#include <iostream>
#include <vector>

int find_element_equal_to_index(const std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == mid) {
            return mid;
        } else if (nums[mid] > mid) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> nums1 = {-3, 0, 2, 34};
    int result1 = find_element_equal_to_index(nums1);
    std::cout << "Result 1: " << result1 << std::endl; // Output: 2

    std::vector<int> nums2 = {1, 7, 9, 13};
    int result2 = find_element_equal_to_index(nums2);
    std::cout << "Result 2: " << result2 << std::endl; // Output: -1

    return 0;
}