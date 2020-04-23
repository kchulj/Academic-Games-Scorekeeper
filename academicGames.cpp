
#include <iostream>

using namespace std;

int main() {
    int scoreA = 0;
    int scoreB = 0;
    string input;

    cout << "Welcome to Academic Games!" << endl;
    cout << "--------------------------" << endl;
    cout << "Toss-up = 5 points" << endl;
    cout << "Bonus = 2 points" << endl;
    cout << "--------------------------" << endl;
    cout << "INSTRUCTIONS:" << endl;
    cout << "Team A's win: enter 'at' for toss-up and 'ab' for bonus" << endl;
    cout << "Team B's win: enter 'bt' for toss-up and 'bb' for bonus" << endl;
    cout << "Enter 'f' to end game" << endl;

    while (input != "f") {
        cin >> input;

        if (input == "at") {
            scoreA += 5;
            cout << "   TEAM A   |   TEAM B   " << endl;
            cout << "------------|------------" << endl;
            cout << "     " << scoreA << "           " << scoreB << "      " << endl;
        }

        else if (input == "ab") {
            scoreA += 2;
            cout << "   TEAM A   |   TEAM B   " << endl;
            cout << "------------|------------" << endl;
            cout << "     " << scoreA << "           " << scoreB << "      " << endl;
        }

        else if (input == "bt") {
            scoreB += 5;
            cout << "   TEAM A   |   TEAM B   " << endl;
            cout << "------------|------------" << endl;
            cout << "     " << scoreA << "           " << scoreB << "      " << endl;
        }

        else if (input == "bb") {
            scoreB += 2;
            cout << "   TEAM A   |   TEAM B   " << endl;
            cout << "------------|------------" << endl;
            cout << "     " << scoreA << "           " << scoreB << "      " << endl;
        }

        else if (input == "f") {
            if (scoreA > scoreB) {
                cout << "-------------------------" << endl;
                cout << "       FINAL RESULT      " << endl;
                cout << "   TEAM A   |   TEAM B   " << endl;
                cout << "------------|------------" << endl;
                cout << "     " << scoreA << "           " << scoreB << "      " << endl;
                cout << "Congratulations Team A!" << endl;
                break;
            }

            else if (scoreA < scoreB) {
                cout << "-------------------------" << endl;
                cout << "       FINAL RESULT      " << endl;
                cout << "   TEAM A   |   TEAM B   " << endl;
                cout << "------------|------------" << endl;
                cout << "     " << scoreA << "           " << scoreB << "      " << endl;
                cout << "Congratulations Team B!" << endl;
                break;
            }

            else if (scoreA == scoreB) {
                cout << "-------------------------" << endl;
                cout << "       FINAL RESULT      " << endl;
                cout << "   TEAM A   |   TEAM B   " << endl;
                cout << "------------|------------" << endl;
                cout << "     " << scoreA << "           " << scoreB << "      " << endl;
                cout << "It is a tie!" << endl;
                break;
            }
        }
        else {
            cout << "Invalid input! Enter again." << endl;
        }
        
    }
    return 0;
}
