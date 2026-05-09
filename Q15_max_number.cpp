// Q15. Find the largest among n numbers
// A data analytics tool finds the maximum sales figure from multiple entries.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    if (n <= 0) { cout << "Invalid count!" << endl; return 1; }

    double num, maxNum;
    cout << "Enter number 1: "; cin >> maxNum;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > maxNum) maxNum = num;
    }

    cout << "\nThe largest number is: " << maxNum << endl;

    return 0;
}
