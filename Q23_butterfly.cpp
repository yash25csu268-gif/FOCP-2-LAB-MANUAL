// Q23. Display a butterfly star pattern
// A fireworks display system arranges sparks in butterfly style.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of butterfly (n): ";
    cin >> n;

    cout << "\n--- Butterfly Pattern ---" << endl;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
