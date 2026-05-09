// Q1. Calculate average marks of three students
// A teacher wants to determine class performance by computing the average of three students' marks.

#include <iostream>
using namespace std;

int main() {
    double marks1, marks2, marks3;

    cout << "Enter marks of Student 1: ";
    cin >> marks1;
    cout << "Enter marks of Student 2: ";
    cin >> marks2;
    cout << "Enter marks of Student 3: ";
    cin >> marks3;

    double average = (marks1 + marks2 + marks3) / 3.0;

    cout << "\n--- Result ---" << endl;
    cout << "Total Marks  : " << (marks1 + marks2 + marks3) << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}
