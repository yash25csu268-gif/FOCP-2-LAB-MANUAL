// Q13. Calculate roots of a quadratic equation ax^2 + bx + c = 0
// A mathematics tool computes exact roots for teaching purposes.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Quadratic Equation: ax^2 + bx + c = 0" << endl;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;

    if (a == 0) {
        cout << "\nNot a quadratic equation (a cannot be 0)." << endl;
        return 1;
    }

    double discriminant = b * b - 4 * a * c;

    cout << "\n--- Result ---" << endl;
    cout << "Discriminant = " << discriminant << endl;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two distinct real roots:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Two equal real roots:" << endl;
        cout << "Root = " << root << endl;
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex (imaginary) roots:" << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
