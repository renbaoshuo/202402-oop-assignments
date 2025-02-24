#include <iostream>
#include <string>

using std::cin;
using std::cout;
const char endl = '\n';

const int DIFF = 'a' - 'A';

int main() {
    int n;

    cin >> n;

    while (n--) {
        std::string s;

        cin >> s;

        bool flag = true;

        for (int i = 1; i < s.size(); i++) {
            if ('a' <= s[i] && s[i] <= 'z') {
                flag &= s[i] == s[i - 1] + DIFF || s[i] == s[i - 1] - 1;
            } else if ('A' <= s[i] && s[i] <= 'Z') {
                flag &= s[i] == s[i - 1] - DIFF || s[i] == s[i - 1] + 1;
            }
        }

        cout << (flag ? "Y" : "N") << endl;
    }

    return 0;
}
