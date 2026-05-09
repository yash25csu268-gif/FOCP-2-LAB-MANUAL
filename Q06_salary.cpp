// Q6. Calculate employees' net salaries with 12% bonus
// An HR system computes net salaries including a fixed 12% bonus.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    double basicSalary, bonus, netSalary;

    cout << "\n----------------------------------------------------------" << endl;
    cout << "Emp No.\tBasic Salary\tBonus (12%)\tNet Salary"              << endl;
    cout << "----------------------------------------------------------"   << endl;

    for (int i = 1; i <= n; i++) {
        cout << "Enter basic salary of Employee " << i << ": ";
        cin >> basicSalary;

        bonus     = basicSalary * 0.12;
        netSalary = basicSalary + bonus;

        cout << i << "\t" << basicSalary << "\t\t" << bonus << "\t\t" << netSalary << endl;
    }

    cout << "----------------------------------------------------------" << endl;

    return 0;
}
