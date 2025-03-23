#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
const char endl = '\n';

std::string s;
std::map<char, int> m;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s;

    for (char c : s) {
        m[c]++;
    }

    for (auto &p : m) {
        cout << p.first << ":" << p.second << endl;
    }

    return 0;
}
