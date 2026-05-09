// Q12. Classify triangle as equilateral, isosceles, or scalene
// A civil engineer classifies a triangle design based on its sides.

#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the three sides of the triangle:" << endl;
    cout << "Side a: "; cin >> a;
    cout << "Side b: "; cin >> b;
    cout << "Side c: "; cin >> c;

    cout << "\n--- Result ---" << endl;

    if (a + b <= c || b + c <= a || a + c <= b) {
        cout << "Invalid triangle! Sum of any two sides must be greater than the third." << endl;
        return 1;
    }

    if (a == b && b == c)
        cout << "The triangle is EQUILATERAL (all sides equal)." << endl;
    else if (a == b || b == c || a == c)
        cout << "The triangle is ISOSCELES (two sides equal)." << endl;
    else
        cout << "The triangle is SCALENE (all sides different)." << endl;

    return 0;
}
