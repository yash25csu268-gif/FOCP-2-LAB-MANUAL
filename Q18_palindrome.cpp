// Q18. Check whether a given ID is a palindrome
// A string-matching tool validates if IDs are palindromes.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string id;
    cout << "Enter the ID to check: ";
    cin >> id;

    string reversed = id;
    reverse(reversed.begin(), reversed.end());

    cout << "\n--- Result ---"          << endl;
    cout << "Original : " << id        << endl;
    cout << "Reversed : " << reversed  << endl;

    if (id == reversed)
        cout << "\"" << id << "\" IS a palindrome."      << endl;
    else
        cout << "\"" << id << "\" is NOT a palindrome."  << endl;

    return 0;
}
