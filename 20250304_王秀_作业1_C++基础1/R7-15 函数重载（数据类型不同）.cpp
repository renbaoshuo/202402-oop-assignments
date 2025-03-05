#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
const char endl = '\n';

int n, a[15];
double b[15];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    std::sort(a, a + n);
    std::sort(b, b + n);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }

    cout << endl;

    for (int i = 0; i < n; ++i) {
        cout << b[i] << ' ';
    }

    cout << endl;

    return 0;
}
