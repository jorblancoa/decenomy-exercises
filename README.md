# decenomy-exercises

## Exercise 1

To find an element in an ordered array whose value equals its index, I used a binary search algorithm. Since the array is ordered, we can take advantage of its properties to efficiently find the desired element. 

The 'find_element_equal_to_index' function performs a binary search on the ordered array. If an element is found whose value equals its index, the function returns the index. If no such element is found, it returns -1. In the example provided, the function correctly returns 2 for the first array and -1 for the second array.

Time Complexity: O(logN) - The time complexity is O(logN) because the array is ordered, and we can use binary search to find the element that matches its index. Binary search has a logarithmic time complexity for a sorted array.

Space Complexity: O(1) - The space complexity is O(1) because we only use a constant amount of extra space for variables used in the binary search algorithm.

## Exercise 2

To find all the starting indices of matches of a simple text pattern in an input text string, I thought about using string searching algorithms, such as the Knuth-Morris-Pratt (KMP) algorithm or the Rabin-Karp algorithm.

In this case I decided to use KMP, so the 'find_pattern_indices' function uses the KMP algorithm to find all occurrences of the pattern in the input text string. It returns a vector containing the starting indices of the matches. In the given example, the function correctly returns [0, 7], indicating that the pattern "abr" occurs at indices 0 and 7 in the input text "abracadabra".

Time Complexity: O(N + M) - The time complexity is O(N + M), where N is the length of the input text string, and M is the length of the pattern. The KMP algorithm has linear time complexity for string matching, which depends on the lengths of both the text and the pattern.

Space Complexity: O(M) - The space complexity is O(M) because we use an additional array of size M (prefix array) to compute the prefix function for the pattern.

## Exercise 3

To solve this problem in C++, I defined a custom comparison function to sort the elements of the array as strings. The goal is to arrange the elements in a way that forms the highest possible number.

In order to find the highest possible number, I defined a custom comparison function 'compare', which takes two strings num1 and num2. The function compares num1 + num2 with num2 + num1. If num1 + num2 is greater than num2 + num1, it means that concatenating num1 before num2 would form a higher number, so we return true to indicate that num1 should come before num2 in the sorted order.

Then, we convert the integer numbers in the input array to strings and sort them using the custom comparison function. Finally, we concatenate the sorted strings to form the highest possible number and return it as an int.

Time Complexity: O(NlogN) - The time complexity is dominated by the sorting algorithm used to arrange the elements in descending order. Most standard sorting algorithms, like quicksort or mergesort, have an average time complexity of O(NlogN) for sorting N elements.

Space Complexity: O(N) - The space complexity is determined by the additional space required for storing the sorted array. In this case, it's O(N) because we need to create a new array with the same size as the input array.