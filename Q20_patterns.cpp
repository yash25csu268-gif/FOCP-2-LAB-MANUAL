// Q20. Pattern printing
// Pattern 1: Fixed tabular layout (1 2 3 4 5 repeated 3 times)
// Pattern 2: Reverse seating layout (5 4 3 2 1 / 5 4 3 2 / ...)

#include <iostream>
using namespace std;

int main() {
    cout << "=== Pattern 1: Fixed Tabular Layout ===" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 1; col <= 5; col++)
            cout << col << (col < 5 ? " " : "");
        cout << endl;
    }

    cout << "\n=== Pattern 2: Reverse Seating Layout ===" << endl;
    for (int row = 1; row <= 5; row++) {
        for (int col = 5; col >= row; col--)
            cout << col << (col > row ? " " : "");
        cout << endl;
    }

    return 0;
}
