// Q26. Accept marks in 5 subjects, compute total and percentage
// The school report card system stores subject marks for each student.

#include <iostream>
using namespace std;

int main() {
    const int SUBJECTS = 5;
    double marks[SUBJECTS], total = 0;

    cout << "Enter marks (out of 100) for each subject:" << endl;
    for (int i = 0; i < SUBJECTS; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    double percentage = total / SUBJECTS;
    string grade;

    if      (percentage >= 90) grade = "A+ (Outstanding)";
    else if (percentage >= 80) grade = "A  (Excellent)";
    else if (percentage >= 70) grade = "B  (Good)";
    else if (percentage >= 60) grade = "C  (Average)";
    else if (percentage >= 50) grade = "D  (Below Average)";
    else                       grade = "F  (Fail)";

    cout << "\n====== Report Card ======" << endl;
    for (int i = 0; i < SUBJECTS; i++)
        cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
    cout << "-------------------------"                                    << endl;
    cout << "Total Marks: " << total << " / " << (SUBJECTS * 100)         << endl;
    cout << "Percentage : " << percentage << "%"                          << endl;
    cout << "Grade      : " << grade                                      << endl;

    return 0;
}
