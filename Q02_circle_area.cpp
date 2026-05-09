// Q2. Compute the area of a circle
// An architect wants to calculate the space covered by a circular fountain.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159265358979;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Error: Radius cannot be negative." << endl;
        return 1;
    }

    double area          = PI * radius * radius;
    double circumference = 2 * PI * radius;

    cout << "\n--- Result ---" << endl;
    cout << "Radius       : " << radius        << endl;
    cout << "Area         : " << area          << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
