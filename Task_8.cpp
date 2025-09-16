#include <iostream>
#include <string>
using namespace std;

int findSubstring(const string& text, const string& pattern) {
    // Use the find() function from the string library to find the first occurrence
    size_t pos = text.find(pattern);

    // If pattern is found, return the position, else return -1
    if (pos != string::npos) {
        return static_cast<int>(pos);  // Convert to int before returning
    }
    return -1;  // Pattern not found
}

int main() {
    // Test case
    // Test 1: Pattern is found
    string text1 = "Hello, welcome..you're currently seeing the code for task 2 of dsa :P";
    string pattern1 = "welcome";
    int result1 = findSubstring(text1, pattern1);
    cout << "First occurrence of 'welcome' in text1: " << result1 << endl;
    // Test 2: Pattern is not found
    string text2 = "This is a simple test.";
    string pattern2 = "complex";
    int result2 = findSubstring(text2, pattern2);
    cout << "First occurrence of 'complex' in text2: " << result2 << endl; // Output: -1

}
