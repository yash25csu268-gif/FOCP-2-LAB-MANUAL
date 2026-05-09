// Q32. Find the largest and second largest number in an array of size 5
// A stock market app tracks first and second highest stock values.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int SIZE = 5;
    double arr[SIZE];

    cout << "Enter " << SIZE << " stock values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> arr[i];
    }

    double largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest       = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "\n--- Result ---"                                                          << endl;
    cout << "Largest        : " << largest                                              << endl;
    if (secondLargest == INT_MIN) cout << "Second Largest : Not found (all equal)"     << endl;
    else                          cout << "Second Largest : " << secondLargest          << endl;

    return 0;
}
