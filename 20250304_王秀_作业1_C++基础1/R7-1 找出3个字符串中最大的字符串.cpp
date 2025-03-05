#include <iostream>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
const char endl = '\n';

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    std::string s[3];

    cin >> s[0] >> s[1] >> s[2];

    std::sort(s, s + 3);

    cout << "The largest string is:" << endl
         << s[2] << endl;

    return 0;
}
