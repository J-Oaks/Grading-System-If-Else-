#include <iostream>

using namespace std;

int main() {
    int finalScore;

    cout << "Enter your final score: ";
    cin >> finalScore;

    if (finalScore >= 90) {
        cout << "Grade A" << endl;
    } else if (finalScore >= 70 && finalScore < 90) {
        cout << "Grade B" << endl;
    } else if (finalScore >= 50 && finalScore < 70) {
        cout << "Grade C" <<endl;
    } else if (finalScore >= 40 && finalScore < 50) {
        cout << "Grade D" << endl;
    } else if (finalScore >= 30 && finalScore < 40) {
        cout << "Grade E" << endl;
    } else {
        cout << "Grade F" << endl;
    }

    return 0;
}
