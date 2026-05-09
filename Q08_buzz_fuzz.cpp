// Q8. BuzzFuzz - Tag event IDs from 1 to N
// Divisible by 3 → "Buzz", by 5 → "Fuzz", by both → "BuzzFuzz"

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    cout << "\n--- Event Log ---" << endl;

    for (int i = 1; i <= n; i++) {
        if      (i % 3 == 0 && i % 5 == 0) cout << "Event " << i << ": BuzzFuzz" << endl;
        else if (i % 3 == 0)                cout << "Event " << i << ": Buzz"     << endl;
        else if (i % 5 == 0)                cout << "Event " << i << ": Fuzz"     << endl;
        else                                cout << "Event " << i << ": " << i    << endl;
    }

    return 0;
}
