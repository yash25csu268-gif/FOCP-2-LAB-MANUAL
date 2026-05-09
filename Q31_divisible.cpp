// Q31. Store 5 elements, count how many are divisible by both 3 and 5
// A manufacturing QC system checks defect codes divisible by both 3 and 5.

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

    int count = 0;
    cout << "\nNumbers divisible by both 3 and 5: ";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0) { cout << arr[i] << " "; count++; }
    }

    if (count == 0) cout << "None";
    cout << "\nTotal count: " << count << endl;

    return 0;
}
