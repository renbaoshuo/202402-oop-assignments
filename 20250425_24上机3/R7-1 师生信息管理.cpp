#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int type;
    while (cin >> type, type != 0) {
        if (type == 1) {
            int id;

            cin >> id;

            int score, missing_count = 0, total_score = 0, valid_subjects = 0;

            for (int i = 0; i < 5; ++i) {
                cin >> score;

                if (score == -1) {
                    ++missing_count;
                } else {
                    total_score += score;
                    ++valid_subjects;
                }
            }

            cout << id << " " << missing_count;

            if (valid_subjects > 0) {
                cout << " " << fixed << setprecision(1) << (double)total_score / valid_subjects;
            }

            cout << endl;
        } else if (type == 2) {
            int id, papers[3];

            cin >> id >> papers[0] >> papers[1] >> papers[2];

            cout << id << " " << papers[0] + papers[1] + papers[2] << endl;
        }
    }

    return 0;
}
