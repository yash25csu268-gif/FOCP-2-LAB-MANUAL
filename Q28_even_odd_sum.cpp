// Q28. Store 5 elements, compute sum of even and odd numbers separately
// A data processing system classifies even and odd inputs separately.

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 == 0) evenSum += arr[i];
        else                  oddSum  += arr[i];
    }

    cout << "\n--- Result ---"                    << endl;
    cout << "Sum of Even numbers: " << evenSum   << endl;
    cout << "Sum of Odd  numbers: " << oddSum    << endl;

    return 0;
}
