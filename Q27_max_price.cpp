// Q27. Store prices of 10 items and display the maximum price
// A supermarket software maintains item price lists.

#include <iostream>
using namespace std;

int main() {
    const int ITEMS = 10;
    double price[ITEMS];

    cout << "Enter prices of " << ITEMS << " items:" << endl;
    for (int i = 0; i < ITEMS; i++) {
        cout << "Item " << (i + 1) << ": ";
        cin >> price[i];
    }

    double maxPrice = price[0];
    int    maxIndex = 0;

    for (int i = 1; i < ITEMS; i++) {
        if (price[i] > maxPrice) { maxPrice = price[i]; maxIndex = i; }
    }

    cout << "\nMaximum price is: " << maxPrice << " (Item " << (maxIndex + 1) << ")" << endl;

    return 0;
}
