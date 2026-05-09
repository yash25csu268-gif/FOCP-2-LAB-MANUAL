// Q30. Accept salary of 10 employees, compute total and average salary
// A payroll system maintains employee salary records.

#include <iostream>
using namespace std;

int main() {
    const int EMP = 10;
    double salary[EMP], total = 0;

    cout << "Enter salaries of " << EMP << " employees:" << endl;
    for (int i = 0; i < EMP; i++) {
        cout << "Employee " << (i + 1) << " salary: ";
        cin >> salary[i];
        total += salary[i];
    }

    double average = total / EMP;

    cout << "\n--- Payroll Summary ---"              << endl;
    cout << "Total Salary  : " << total             << endl;
    cout << "Average Salary: " << average           << endl;

    return 0;
}
