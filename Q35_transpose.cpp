// Q35. Store a 3x3 matrix and compute its transpose
// A data analytics tool flips rows and columns for better visualization.

#include <iostream>
using namespace std;

int main() {
    int A[3][3], T[3][3];

    cout << "Enter elements of the 3x3 Matrix:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) { cout << "A[" << i << "][" << j << "]: "; cin >> A[i][j]; }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            T[j][i] = A[i][j];

    cout << "\n--- Original Matrix ---" << endl;
    for (int i = 0; i < 3; i++) { for (int j = 0; j < 3; j++) cout << A[i][j] << "\t"; cout << endl; }

    cout << "\n--- Transpose Matrix ---" << endl;
    for (int i = 0; i < 3; i++) { for (int j = 0; j < 3; j++) cout << T[i][j] << "\t"; cout << endl; }

    return 0;
}
