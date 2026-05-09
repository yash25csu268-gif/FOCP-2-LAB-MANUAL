// Q24. Display alphabets in pyramid form (A / AB / ABC / ABCD / ABCDE)
// A typing practice app displays the alphabets in pyramid form.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (max 26): ";
    cin >> n;
    if (n > 26) n = 26;

    cout << "\n--- Alphabet Pyramid ---" << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++)
            cout << (char)('A' + j);
        cout << endl;
    }

    return 0;
}
