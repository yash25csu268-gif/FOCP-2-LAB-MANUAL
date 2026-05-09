// Q4. Calculate total bill with 20% discount
// A shopkeeper wants to compute the bill after applying a 20% discount.

#include <iostream>
using namespace std;

int main() {
    int    itemNo, quantity;
    double unitPrice, totalAmount, discount, finalAmount;

    cout << "Enter Item Number: "; cin >> itemNo;
    cout << "Enter Quantity   : "; cin >> quantity;
    cout << "Enter Unit Price : "; cin >> unitPrice;

    totalAmount = quantity * unitPrice;
    discount    = totalAmount * 0.20;
    finalAmount = totalAmount - discount;

    cout << "\n--- Bill Summary ---"            << endl;
    cout << "Item No.      : " << itemNo       << endl;
    cout << "Quantity      : " << quantity      << endl;
    cout << "Unit Price    : " << unitPrice     << endl;
    cout << "Total Amount  : " << totalAmount   << endl;
    cout << "Discount (20%): " << discount      << endl;
    cout << "Final Amount  : " << finalAmount   << endl;

    return 0;
}
