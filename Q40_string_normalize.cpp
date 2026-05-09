// Q40. Normalize and validate input string for a content-management system
// 1. Remove leading, trailing, and extra spaces between words
// 2. Convert to sentence case (first char uppercase, rest lowercase)
// 3. Count words, digits, and special characters
// 4. Validate final string contains only alphabets, digits, and spaces

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Count digits and special characters on original input
    int digitCount = 0, specialCount = 0;
    for (char ch : input) {
        if (isdigit(ch))                   digitCount++;
        else if (!isalpha(ch) && ch != ' ') specialCount++;
    }

    // Remove extra spaces and build normalized string
    istringstream iss(input);
    string word, normalized = "";
    int wordCount = 0;

    while (iss >> word) {
        if (!normalized.empty()) normalized += " ";
        normalized += word;
        wordCount++;
    }

    // Convert to sentence case
    if (!normalized.empty()) {
        normalized[0] = toupper(normalized[0]);
        for (int i = 1; i < (int)normalized.size(); i++)
            normalized[i] = tolower(normalized[i]);
    }

    // Validate: only alphabets, digits, and spaces
    bool isValid = true;
    for (char ch : normalized)
        if (!isalpha(ch) && !isdigit(ch) && ch != ' ') { isValid = false; break; }

    // Display results
    cout << "\n--- Normalized String ---"                          << endl;
    cout << "\"" << normalized << "\""                            << endl;
    cout << "\n--- Statistics ---"                                 << endl;
    cout << "Total Words             : " << wordCount             << endl;
    cout << "Total Digits            : " << digitCount            << endl;
    cout << "Total Special Characters: " << specialCount          << endl;
    cout << "\n--- Validation Result ---"                          << endl;
    if (isValid)
        cout << "VALID: contains only alphabets, digits, and spaces." << endl;
    else
        cout << "INVALID: special characters detected in input."      << endl;

    return 0;
}
