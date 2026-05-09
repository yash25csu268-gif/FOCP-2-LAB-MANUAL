// Q19. Find all prime numbers within a given range
// A network security system generates prime numbers for encryption key pools.

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
    int low, high;
    cout << "Enter lower limit: "; cin >> low;
    cout << "Enter upper limit: "; cin >> high;

    if (low > high) swap(low, high);

    cout << "\nPrime numbers between " << low << " and " << high << ":\n";

    int count = 0;
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) { cout << i << " "; count++; }
    }

    if (count == 0) cout << "None";
    cout << "\nTotal prime numbers found: " << count << endl;

    return 0;
}
