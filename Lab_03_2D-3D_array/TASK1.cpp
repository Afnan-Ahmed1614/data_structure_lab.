#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int st = 6, sub = 4;

    int m[st][sub] = {
        {78, 85, 92, 88},
        {91, 89, 84, 95},
        {67, 74, 81, 79},
        {88, 93, 90, 86},
        {95, 90, 96, 94},
        {82, 87, 85, 91}
    };

    cout << "Marks\n";
    cout << "Student\tEnglish\tMaths\tProgramming\tAI\n";

    for (int i = 0; i < st; i++) {
        cout << "Student " << i + 1 << "\t";

        for (int j = 0; j < sub; j++) {
            cout << m[i][j] << "\t";
        }

        cout << "\n";
    }

    int tot[st];
    double avg[st];

    const char* sb[sub] = {
        "English", "Maths", "Programming", "AI"
    };

    cout << "\nTotal and Average\n";

    for (int i = 0; i < st; i++) {
        tot[i] = 0;

        for (int j = 0; j < sub; j++) {
            tot[i] += m[i][j];
        }

        avg[i] = tot[i] / (double)sub;

        cout << "Student " << i + 1
             << ": Total = " << tot[i]
             << ", Average = " << avg[i] << "\n";
    }

    cout << "\nHighest Marks\n";

    for (int j = 0; j < sub; j++) {
        int high = m[0][j];

        for (int i = 1; i < st; i++) {
            
            if (m[i][j] > high) {
                high = m[i][j];
            }
        }

        cout << sb[j] << ": " << high << "\n";
    }

    int highTot = tot[0];
    int highSt = 0;

    for (int i = 1; i < st; i++) {
        if (tot[i] > highTot) {
            highTot = tot[i];
            highSt = i;
        }
    }

    cout << "\nStudent with highest total\n";
    cout << "Student " << highSt + 1
         << ": " << highTot << "\n";

    return 0;
}
