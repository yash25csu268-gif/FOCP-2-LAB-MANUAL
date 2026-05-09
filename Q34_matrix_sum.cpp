// Q34. Store two 3x3 matrices and compute their sum
// A graphics rendering engine adds pixel intensity matrices.

#include <iostream>
using namespace std;

void printMatrix(const string& name, int M[3][3]) {
    cout << name << ":" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << M[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout << "Enter elements of Matrix A (3x3):" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) { cout << "A[" << i << "][" << j << "]: "; cin >> A[i][j]; }

    cout << "\nEnter elements of Matrix B (3x3):" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) { cout << "B[" << i << "][" << j << "]: "; cin >> B[i][j]; }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "\n"; printMatrix("Matrix A", A);
    cout << "\n"; printMatrix("Matrix B", B);
    cout << "\n"; printMatrix("Sum (A + B)", C);

    return 0;
}
