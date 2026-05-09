// Q5. Swap two numbers using different techniques
// A student wants to practice swapping values of two variables.

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers:" << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    cout << "\nOriginal: a = " << a << ", b = " << b << endl;

    // Method 1: Using a temporary variable
    temp = a; a = b; b = temp;
    cout << "\nMethod 1 (Temp Variable): a = " << a << ", b = " << b << endl;

    // Restore
    temp = a; a = b; b = temp;

    // Method 2: Using arithmetic operators
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Method 2 (Arithmetic)   : a = " << a << ", b = " << b << endl;

    // Restore
    a = a + b; b = a - b; a = a - b;

    // Method 3: Using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "Method 3 (XOR Bitwise)  : a = " << a << ", b = " << b << endl;

    return 0;
}
