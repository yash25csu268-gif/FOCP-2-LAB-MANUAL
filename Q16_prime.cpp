// Q16. Check if a number is prime
// A cybersecurity tool verifies prime numbers used in encryption keys.

#include <iostream>
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

int main() {
    int number;
    cout << "Enter a number to check: ";
    cin >> number;

    cout << "\n--- Result ---" << endl;
    if (isPrime(number))
        cout << number << " is a PRIME number." << endl;
    else
        cout << number << " is NOT a prime number." << endl;

    return 0;
}
