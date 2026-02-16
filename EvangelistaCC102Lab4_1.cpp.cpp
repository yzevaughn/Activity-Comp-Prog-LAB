#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char choice;

    do {

        system("cls");
        int numOfStudents, quizzes;

        cout << "Enter number of Student: ";
        cin >> numOfStudents;

        cout << "Enter number of Quizzes: ";
        cin >> quizzes;


        int scores[numOfStudents][quizzes];
        double average[numOfStudents];

        cout << endl;

        for (int i = 0; i < numOfStudents; i++) {

            int sum = 0;

            for (int j = 0; j < quizzes; j++) {
                cout << "Student " << i + 1 << ": Enter the score of Quiz #" << i + 1 << ": ";
                cin >> scores[i][j];
                sum += scores[i][j];
            }

            average[i] = sum / double(quizzes);
            cout << endl;
        }


        cout << "\nStudent\t";

        for (int i = 0; i < quizzes; i++) {

            cout << "Q" << i + 1 << "\t";

        }
        cout << "Average\n";

        for (int i = 0; i < numOfStudents; i++) {

            cout << i + 1 << "\t";

            for (int j = 0; j < quizzes; j++) {

                cout << scores[i][j] << "\t";

                }

            cout << fixed << setprecision(2) << average[i] << endl;

        }

        cout << "\nDo you want to try again? (y/n): ";
        cin >> choice;

    } while (tolower(choice) == 'y');

    return 0;
}
