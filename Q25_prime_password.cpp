// Q25. Display all prime numbers between two limits
//      + Strong password validation
// A security system generates prime keys; a web app enforces strong passwords.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0) return false;
    return true;
}

bool validatePassword(const string& password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "@#$%!&*";

    for (char ch : password) {
        if (isupper(ch))                            hasUpper   = true;
        if (islower(ch))                            hasLower   = true;
        if (isdigit(ch))                            hasDigit   = true;
        if (specialChars.find(ch) != string::npos) hasSpecial = true;
    }

    cout << "\n--- Password Validation Report ---"                     << endl;
    cout << "Uppercase letter  : " << (hasUpper   ? "PASS" : "FAIL") << endl;
    cout << "Lowercase letter  : " << (hasLower   ? "PASS" : "FAIL") << endl;
    cout << "Digit             : " << (hasDigit   ? "PASS" : "FAIL") << endl;
    cout << "Special character : " << (hasSpecial ? "PASS" : "FAIL") << endl;

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    // Part 1: Primes in range
    cout << "=== Part 1: Prime Numbers Between Two Limits ===" << endl;
    int low, high;
    cout << "Enter lower limit: "; cin >> low;
    cout << "Enter upper limit: "; cin >> high;
    if (low > high) swap(low, high);

    cout << "\nPrime numbers between " << low << " and " << high << ": ";
    int count = 0;
    for (int i = low; i <= high; i++)
        if (isPrime(i)) { cout << i << " "; count++; }
    if (count == 0) cout << "None";
    cout << "\nTotal: " << count << endl;

    // Part 2: Password validation
    cout << "\n=== Part 2: Strong Password Validator ===" << endl;
    string password;
    cout << "Enter a password to validate: ";
    cin >> password;

    if (validatePassword(password))
        cout << "\nPassword is STRONG and ACCEPTED." << endl;
    else
        cout << "\nPassword is WEAK. Please meet all requirements." << endl;

    return 0;
}
