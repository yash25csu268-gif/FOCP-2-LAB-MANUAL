// Q14. Menu-driven calculator for basic arithmetic operations
// The program continues executing based on the user's choice.

#include <iostream>
using namespace std;

int main() {
    int    choice;
    double num1, num2;

    do {
        cout << "\n====== Calculator Menu ======" << endl;
        cout << "1. Addition"                     << endl;
        cout << "2. Subtraction"                  << endl;
        cout << "3. Multiplication"               << endl;
        cout << "4. Division"                     << endl;
        cout << "5. Modulus (integers)"           << endl;
        cout << "0. Exit"                         << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) { cout << "Goodbye!" << endl; break; }
        if (choice < 1 || choice > 5) { cout << "Invalid choice." << endl; continue; }

        cout << "Enter number 1: "; cin >> num1;
        cout << "Enter number 2: "; cin >> num2;

        cout << "\n--- Result ---" << endl;
        switch (choice) {
            case 1: cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl; break;
            case 2: cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl; break;
            case 3: cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl; break;
            case 4:
                if (num2 == 0) cout << "Error: Division by zero!" << endl;
                else cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                break;
            case 5:
                if ((int)num2 == 0) cout << "Error: Modulus by zero!" << endl;
                else cout << (int)num1 << " % " << (int)num2 << " = " << ((int)num1 % (int)num2) << endl;
                break;
        }
    } while (true);

    return 0;
}
