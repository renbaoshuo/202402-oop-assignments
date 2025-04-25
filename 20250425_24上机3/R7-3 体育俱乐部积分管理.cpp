#include <iostream>
#include <string>

using namespace std;

int main() {
    int type;

    string name, score;

    while (cin >> type, type) {
        cin >> name >> score;

        int colonIndex = score.find(':');
        int score1 = stoi(score.substr(0, colonIndex));
        int score2 = stoi(score.substr(colonIndex + 1));

        int points = 0;

        if (type == 1) {
            points = score1 > score2 ? 2 : 1;
        } else if (type == 2) {
            if (score1 > score2) points = 3;
            else if (score1 == score2) points = 1;
            else points = 0;
        } else if (type == 3) {
            if ((score1 == 3 && score2 == 0) || (score1 == 3 && score2 == 1)) points = 3;
            else if (score1 == 3 && score2 == 2) points = 2;
            else if (score1 == 2 && score2 == 3) points = 1;
            else points = 0;
        }

        cout << name << " " << points << endl;
    }

    return 0;
}
