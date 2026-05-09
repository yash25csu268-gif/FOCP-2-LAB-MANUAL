// Q7. Find the winner among three players' scores
// A game compares three players' scores to find who is ahead.

#include <iostream>
using namespace std;

int main() {
    double score1, score2, score3;

    cout << "Enter score of Player 1: "; cin >> score1;
    cout << "Enter score of Player 2: "; cin >> score2;
    cout << "Enter score of Player 3: "; cin >> score3;

    cout << "\n--- Result ---" << endl;

    if (score1 >= score2 && score1 >= score3)
        cout << "Player 1 wins with score: " << score1 << endl;
    else if (score2 >= score1 && score2 >= score3)
        cout << "Player 2 wins with score: " << score2 << endl;
    else
        cout << "Player 3 wins with score: " << score3 << endl;

    if (score1 == score2 && score2 == score3)
        cout << "All three players are tied!" << endl;

    return 0;
}
