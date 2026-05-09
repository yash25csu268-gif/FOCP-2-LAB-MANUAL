// Q11. Apply 10% discount if order > 1000 items
// A wholesale supplier applies 10% discount on large orders.

#include <iostream>
using namespace std;

int main() {
    int    quantity;
    double unitPrice, totalExpense, discount, finalAmount;

    cout << "Enter quantity of items: "; cin >> quantity;
    cout << "Enter unit price       : "; cin >> unitPrice;

    totalExpense = quantity * unitPrice;

    if (quantity > 1000) {
        discount    = totalExpense * 0.10;
        finalAmount = totalExpense - discount;
        cout << "\nDiscount of 10% applied (order > 1000 items)." << endl;
    } else {
        discount    = 0;
        finalAmount = totalExpense;
        cout << "\nNo discount applied (order <= 1000 items)." << endl;
    }

    cout << "\n--- Bill Summary ---"               << endl;
    cout << "Quantity      : " << quantity         << endl;
    cout << "Unit Price    : " << unitPrice        << endl;
    cout << "Total Expense : " << totalExpense     << endl;
    cout << "Discount (10%): " << discount         << endl;
    cout << "Final Amount  : " << finalAmount      << endl;

    return 0;
}
