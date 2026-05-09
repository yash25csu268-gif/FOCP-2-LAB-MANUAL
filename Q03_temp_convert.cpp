// Q3. Convert temperature between Fahrenheit and Celsius
// A weather app developer needs to provide both Celsius and Fahrenheit readings.

#include <iostream>
using namespace std;

int main() {
    int choice;
    double temperature, result;

    cout << "Temperature Conversion Menu" << endl;
    cout << "1. Fahrenheit to Celsius"    << endl;
    cout << "2. Celsius to Fahrenheit"    << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        result = (temperature - 32) * 5.0 / 9.0;
        cout << "\n" << temperature << " F = " << result << " C" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        result = (temperature * 9.0 / 5.0) + 32;
        cout << "\n" << temperature << " C = " << result << " F" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
