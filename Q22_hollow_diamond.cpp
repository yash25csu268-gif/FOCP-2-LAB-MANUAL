// Q22. Display a hollow diamond pattern of *
// A jewelry design tool generates hollow diamond outlines for patterns.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the half-size of the diamond (n): ";
    cin >> n;

    cout << "\n--- Hollow Diamond Pattern ---" << endl;

    // Upper half (including middle row)
    for (int i = 1; i <= n; i++) {
        for (int sp = n - i; sp >= 1; sp--) cout << " ";
        if (i == 1) {
            cout << "*";
        } else {
            cout << "*";
            for (int sp = 2 * i - 3; sp >= 1; sp--) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int sp = n - i; sp >= 1; sp--) cout << " ";
        if (i == 1) {
            cout << "*";
        } else {
            cout << "*";
            for (int sp = 2 * i - 3; sp >= 1; sp--) cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
