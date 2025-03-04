#include <iostream>
#include <string>

using std::cin;
using std::cout;
const char endl = '\n';

int main() {
    std::string s1, s2, t1, t2;

    cin >> s1 >> s2;

    for (int i = 1; i < s1.size(); i++) {
        if (s1[i] % 2 == s1[i - 1] % 2) {
            t1.push_back(std::max(s1[i], s1[i - 1]));
        }
    }

    for (int i = 1; i < s2.size(); i++) {
        if (s2[i] % 2 == s2[i - 1] % 2) {
            t2.push_back(std::max(s2[i], s2[i - 1]));
        }
    }

    if (t1 == t2) {
        cout << t1 << endl;
    } else {
        cout << t1 << endl
             << t2 << endl;
    }

    return 0;
}
