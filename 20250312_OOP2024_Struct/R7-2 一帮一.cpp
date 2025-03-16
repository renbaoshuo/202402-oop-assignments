#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cin;
using std::cout;
const char endl = '\n';

struct node {
    int rank, gender;
    std::string name;

    node(int rank = -1, int gender = -1, std::string name = "")
        : rank(rank), gender(gender), name(name) {}
};

int n;
std::vector<node> stu;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0, k; i < n; i++) {
        std::string s;

        cin >> k >> s;

        stu.emplace_back(i, k, s);
    }

    for (int i = 0; i < n / 2; i++) {
        std::vector<node>::reverse_iterator it = std::find_if(stu.rbegin(), stu.rend(), [&](const node &a) { return a.gender == stu[i].gender ^ 1; });

        cout << stu[i].name << ' ' << it->name << endl;

        stu.erase(it.base() - 1);
    }

    return 0;
}
