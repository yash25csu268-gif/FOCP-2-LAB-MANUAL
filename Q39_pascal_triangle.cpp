// Q39. Generate Pascal's Triangle for a given number of rows
// Uses iterative logic with loops (no factorial) — efficient for data analytics.

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;

    long long pascal[20][20] = {};

    for (int i = 0; i < rows; i++) {
        pascal[i][0] = 1;
        for (int j = 1; j <= i; j++)
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
    }

    cout << "\n--- Pascal's Triangle ---" << endl;
    for (int i = 0; i < rows; i++) {
        for (int sp = rows - i - 1; sp > 0; sp--) cout << "  ";
        for (int j = 0; j <= i; j++) {
            cout << pascal[i][j];
            if (j < i) cout << "    ";
        }
        cout << endl;
    }

    return 0;
}
