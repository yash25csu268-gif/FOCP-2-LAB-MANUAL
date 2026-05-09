// Q9. Classify input symbol as vowel, consonant, digit, or special character
// A text editor auto-detects whether an input letter is a vowel, consonant, or number.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "\n--- Classification ---" << endl;

    if (ch >= '0' && ch <= '9') {
        cout << "'" << ch << "' is a Digit." << endl;
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char lower = tolower(ch);
        if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u')
            cout << "'" << ch << "' is a Vowel." << endl;
        else
            cout << "'" << ch << "' is a Consonant." << endl;
    } else {
        cout << "'" << ch << "' is a Special Character." << endl;
    }

    return 0;
}
