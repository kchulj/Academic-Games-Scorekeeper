/*
    INSTRUCTIONS:
    Toss-up = 5 points
    Bonus = 2 points

    Team A's turn: enter "" for toss-up and "" for bonus
    Team B's turn: enter "" for toss-up and "" for bonus
*/

#include <iostream>

using namespace std;

int main() {
    int scoreA = 0;
    int scoreB = 0;
    string input;

    cout << "Welcome to Academic Games!" << endl;

    while (input != "f") {
        cin >> input;

        if (input == "at") {
            scoreA += 5;
            cout << "Team A has " << scoreA << " points." << endl;
            cout << "Team B has " << scoreB << " points." << endl;
        }

        else if (input == "ab") {
            scoreA += 2;
            cout << "Team A has " << scoreA << " points." << endl;
            cout << "Team B has " << scoreB << " points." << endl;
        }

        else if (input == "bt") {
            scoreB += 5;
            cout << "Team A has " << scoreA << " points." << endl;
            cout << "Team B has " << scoreB << " points." << endl;
        }

        else if (input == "bb") {
            scoreB += 2;
            cout << "Team A has " << scoreA << " points." << endl;
            cout << "Team B has " << scoreB << " points." << endl;
        }
        else if (input == "f") {
            if (scoreA > scoreB) {
                cout << "Team A has " << scoreA << " points" << endl;
                cout << "Team B has " << scoreB << " points" << endl;
                cout << "Team A won!" << endl;
                break;
            }

            else if (scoreA < scoreB) {
                cout << "Team A has " << scoreA << " points" << endl;
                cout << "Team B has " << scoreB << " points" << endl;
                cout << "Team B won!" << endl;
                break;
            }

            else if (scoreA == scoreB) {
                cout << "Team A has " << scoreA << " points" << endl;
                cout << "Team B has " << scoreB << " points" << endl;
                cout << "It is a tie!" << endl;
                break;
            }
        }
    }
    return 0;
}
