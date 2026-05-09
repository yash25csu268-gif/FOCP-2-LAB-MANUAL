// Q37. Validate whether a given string can be accepted as a username
// A registration system rejects usernames with spaces or special characters.
// Valid: only letters, digits, and underscores allowed.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    cout << "Enter a username to validate: ";
    cin >> username;

    if (username.empty()) { cout << "Username cannot be empty!" << endl; return 1; }

    bool isValid = true;
    char invalidChar = '\0';

    for (char ch : username) {
        if (!isalnum(ch) && ch != '_') { isValid = false; invalidChar = ch; break; }
    }

    cout << "\n--- Validation Result ---" << endl;
    if (isValid) {
        cout << "Username \"" << username << "\" is VALID." << endl;
    } else {
        cout << "Username \"" << username << "\" is INVALID." << endl;
        cout << "Invalid character found: '" << invalidChar << "'" << endl;
        cout << "Only letters, digits, and underscores (_) are allowed." << endl;
    }

    return 0;
}
