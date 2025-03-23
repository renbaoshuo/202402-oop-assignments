#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
const char endl = '\n';

const double PI = 3.14159;

double a, b, c;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b >> c;

    cout << (b * c - a * a * PI) * 20. << endl;

    return 0;
}
