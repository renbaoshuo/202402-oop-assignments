#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    double c, d;

    cin >> a >> b >> c >> d;

    cout << std::max(a, b) << ' ' << std::min(a, b) << ' ' << a + b << ' ' << a - b << ' ' << a * b << ' ' << a / b << endl;
    cout << std::max(c, d) << ' ' << std::min(c, d) << ' ' << c + d << ' ' << c - d << ' ' << c * d << ' ' << c / d << endl;

    return 0;
}
