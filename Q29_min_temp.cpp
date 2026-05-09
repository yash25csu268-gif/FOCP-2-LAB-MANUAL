// Q29. Store 30-day temperatures and find minimum temperature
// A weather monitoring app records 30-day temperature logs.

#include <iostream>
using namespace std;

int main() {
    const int DAYS = 30;
    double temp[DAYS];

    cout << "Enter daily temperatures for " << DAYS << " days:" << endl;
    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << (i + 1) << ": ";
        cin >> temp[i];
    }

    double minTemp = temp[0];
    int    minDay  = 1;

    for (int i = 1; i < DAYS; i++) {
        if (temp[i] < minTemp) { minTemp = temp[i]; minDay = i + 1; }
    }

    cout << "\nMinimum Temperature: " << minTemp << " (Day " << minDay << ")" << endl;

    return 0;
}
