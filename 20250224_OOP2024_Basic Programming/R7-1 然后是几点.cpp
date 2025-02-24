#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

int main() {
    int x, h, m, t;

    cin >> x >> t;

    h = x / 100;
    m = x % 100;

    h += t / 60;
    m += t % 60;

    if (m >= 60) {
        m -= 60;
        h++;
    } else if (m < 0) {
        m += 60;
        h--;
    }

    cout << h;

    if (m < 10) {
        cout << '0' << m;
    } else {
        cout << m;
    }

    cout << endl;

    return 0;
}
