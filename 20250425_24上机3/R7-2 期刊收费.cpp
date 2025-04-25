#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int type;
    while (cin >> type, type) {
        string name;
        double price;

        cin >> name >> price;

        if (type == 1) {
            int issues;

            cin >> issues;

            double charge = price * issues;

            cout << fixed << setprecision(1) << name << " " << charge << endl;
        } else if (type == 2) {
            int subscriptionWeeks, issuesPerWeek;

            cin >> subscriptionWeeks >> issuesPerWeek;

            double charge = price * subscriptionWeeks * issuesPerWeek;

            cout << name << " " << fixed << setprecision(1) << charge << endl;
        }
    }
    return 0;
}
