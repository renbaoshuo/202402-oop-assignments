#include <iostream>
#include <iomanip>
#include <string>

using std::cin;
using std::cout;
const char endl = '\n';

int main() {
    int type;

    while (cin >> type, type != 0) {
        if (type == 1) {
            std::string name;
            double price, period, condition;

            cin >> name >> price >> period >> condition;

            double original_rent = period * 1.2;
            double valuation = price * condition;

            cout << name << " " << std::fixed << std::setprecision(1) << original_rent;

            if (original_rent > 2 * valuation) {
                double actual_rent = 2 * valuation;

                cout << " " << std::fixed << std::setprecision(1) << actual_rent << " R";
            }
        } else if (type == 2) {
            std::string name;
            double price, period, times_rented;

            cin >> name >> price >> period >> times_rented;

            double original_rent = period * 1.2;
            double valuation = price / (1 + times_rented / 3);  // 估价

            cout << name << " " << std::fixed << std::setprecision(1) << original_rent;

            if (original_rent > 2 * valuation) {
                double actual_rent = 2 * valuation;

                cout << " " << std::fixed << std::setprecision(1) << actual_rent << " R";
            }
        }

        cout << endl;
    }
    return 0;
}
