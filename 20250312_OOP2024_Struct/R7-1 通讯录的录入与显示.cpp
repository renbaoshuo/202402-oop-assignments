#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

struct node {
    std::string name, birthday, gender, tel, phone;
};

int n, k;
node a[15];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].birthday >> a[i].gender >> a[i].tel >> a[i].phone;
    }

    cin >> k;

    while (k--) {
        int x;

        cin >> x;

        if (0 <= x && x < n) cout << a[x].name << ' ' << a[x].tel << ' ' << a[x].phone << ' ' << a[x].gender << ' ' << a[x].birthday << endl;
        else cout << "Not Found" << endl;
    }

    return 0;
}
