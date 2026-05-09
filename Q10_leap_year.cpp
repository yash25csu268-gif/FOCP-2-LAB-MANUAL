// Q10. Check if a year is a leap year
// A calendar app calculates whether February has 29 days.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    cout << "\n--- Result ---" << endl;
    if (isLeap)
        cout << year << " is a Leap Year. February has 29 days." << endl;
    else
        cout << year << " is NOT a Leap Year. February has 28 days." << endl;

    return 0;
}
