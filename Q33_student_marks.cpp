// Q33. Accept marks in 5 subjects for 3 students using 2D array
// Display: marks in 2nd subject of 1st student, and 5th subject of 3rd student.

#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 3;
    const int SUBJECTS = 5;
    int marks[STUDENTS][SUBJECTS];

    for (int i = 0; i < STUDENTS; i++) {
        cout << "\nStudent " << (i + 1) << ":" << endl;
        for (int j = 0; j < SUBJECTS; j++) {
            cout << "  Subject " << (j + 1) << ": ";
            cin >> marks[i][j];
        }
    }

    cout << "\n--- Result ---"                                                               << endl;
    cout << "Marks in 2nd subject of 1st student: " << marks[0][1]                         << endl;
    cout << "Marks in 5th subject of 3rd student: " << marks[2][4]                         << endl;

    cout << "\n--- Full Marks Table ---"                                                     << endl;
    cout << "\t\tSub1\tSub2\tSub3\tSub4\tSub5"                                             << endl;
    for (int i = 0; i < STUDENTS; i++) {
        cout << "Student " << (i + 1) << ":\t";
        for (int j = 0; j < SUBJECTS; j++) cout << marks[i][j] << "\t";
        cout << endl;
    }

    return 0;
}
