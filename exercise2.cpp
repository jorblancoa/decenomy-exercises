#include <iostream>
#include <vector>
#include <string>

std::vector<int> find_pattern_indices(const std::string& text, const std::string& pattern) {
    int text_size = text.size();
    int pattern_size = pattern.size();
    std::vector<int> indices;

    // Calculate the prefix function for the pattern
    std::vector<int> prefix(pattern_size, 0);
    for (int i = 1, j = 0; i < pattern_size; i++) {
        while (j > 0 && pattern[i] != pattern[j])
            j = prefix[j - 1];

        if (pattern[i] == pattern[j])
            j++;

        prefix[i] = j;
    }

    // Perform string matching using the KMP algorithm
    for (int i = 0, j = 0; i < text_size; i++) {
        while (j > 0 && text[i] != pattern[j])
            j = prefix[j - 1];

        if (text[i] == pattern[j])
            j++;

        if (j == pattern_size) {
            // Pattern found at index i - pattern_size + 1
            indices.push_back(i - pattern_size + 1);
            j = prefix[j - 1];
        }
    }

    return indices;
}

int main() {
    std::string text = "abracadabra";
    std::string pattern = "abr";
    std::vector<int> indices = find_pattern_indices(text, pattern);

    std::cout << "Pattern indices: ";
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    std::cout << std::endl;

    return 0;
}