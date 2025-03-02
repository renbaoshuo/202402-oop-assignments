#include <iostream>
#include <string>

using std::cin;
using std::cout;
const char endl = '\n';

bool is_prime(long long x) {
    if (x == 0 || x == 1) return false;

    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }

    return true;
}

int main() {
    int l, k;
    std::string s;

    cin >> l >> k >> s;

    for (int i = 0; i <= l - k; i++) {
        std::string t = s.substr(i, k);

        if (is_prime(std::stol(t))) {
            cout << t << endl;

            return 0;
        }
    }

    cout << 404 << endl;

    return 0;
}
