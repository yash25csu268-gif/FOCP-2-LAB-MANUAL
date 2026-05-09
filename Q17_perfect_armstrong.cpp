// Q17. Check if a number is a Perfect number or an Armstrong number
// A learning application analyzes numbers for mathematical properties.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) return false;
    int sum = 1;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}

bool isArmstrong(int n) {
    int original = n;
    int digits   = to_string(n).length();
    int sum      = 0;
    while (n > 0) {
        sum += pow(n % 10, digits);
        n /= 10;
    }
    return sum == original;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "\n--- Result ---" << endl;
    cout << number << (isPerfect(number)   ? " IS"     : " is NOT") << " a Perfect number."   << endl;
    cout << number << (isArmstrong(number) ? " IS"     : " is NOT") << " an Armstrong number." << endl;

    return 0;
}
