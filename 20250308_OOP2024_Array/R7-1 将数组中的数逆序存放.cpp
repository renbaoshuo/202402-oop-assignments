#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

int n, a[15];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = n; i; i--) {
        cout << a[i] << (i == 1 ? '\n' : ' ');
    }

    return 0;
}
