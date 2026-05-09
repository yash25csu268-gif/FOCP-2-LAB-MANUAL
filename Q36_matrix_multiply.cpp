// Q36. Multiply two matrices of order m×n and p×q (if valid)
// A machine learning model multiplies matrices for neural network layers.
// Valid only when n == p.

#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;

    cout << "Enter dimensions of Matrix A (m x n):" << endl;
    cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;
    cout << "Enter dimensions of Matrix B (p x q):" << endl;
    cout << "p = "; cin >> p;
    cout << "q = "; cin >> q;

    if (n != p) {
        cout << "\nMatrix multiplication NOT possible! Columns of A (" << n
             << ") must equal Rows of B (" << p << ")." << endl;
        return 1;
    }

    double A[10][10], B[10][10], C[10][10] = {};

    cout << "\nEnter elements of Matrix A (" << m << "x" << n << "):" << endl;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) { cout << "A[" << i << "][" << j << "]: "; cin >> A[i][j]; }

    cout << "\nEnter elements of Matrix B (" << p << "x" << q << "):" << endl;
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++) { cout << "B[" << i << "][" << j << "]: "; cin >> B[i][j]; }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "\n--- Result Matrix C = A x B (" << m << "x" << q << ") ---" << endl;
    for (int i = 0; i < m; i++) { for (int j = 0; j < q; j++) cout << C[i][j] << "\t"; cout << endl; }

    return 0;
}
