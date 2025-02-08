#include <iostream>
using namespace std;

int main() {
    int students, subjects;
    cout << "Enter students (including you):\n";
    cin >> students;
    cout << "Enter the number of subjects:\n";
    cin >> subjects;

    double grades[students][subjects + 1];

    // Input grades for the user
    for (int i = 0; i < subjects; i++) {
        cout << "Enter your grade in subject " << i + 1 << ":\n";
        cin >> grades[0][i];
    }

    // Input grades for other students
    for (int i = 0; i < subjects; i++) {
        for (int j = 1; j < students; j++) {
            cout << "Enter the grade of student " << j + 1 << " in subject " << i + 1 << ":\n";
            cin >> grades[j][i];
        }
    }

    // Calculate averages
    for (int i = 0; i < students; i++) {
        double sum = 0;
        for (int j = 0; j < subjects; j++) {
            sum += grades[i][j];
        }
        grades[i][subjects] = sum / subjects; // Store average in the last column
    }

    // Display grades and averages
    for (int i = 0; i < students; i++) {
        cout << "Grades for student " << i + 1 << ": ";
        for (int j = 0; j < subjects; j++) {
            cout << grades[i][j] << " ";
        }
        cout << " | Average: " << grades[i][subjects] << endl;
    }

    return 0;
}
