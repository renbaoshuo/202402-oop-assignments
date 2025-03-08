#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

int n1, n2, n3, a1[25], a2[25], a3[25];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n1;

    for (int i = 0; i < n1; i++) {
        cin >> a1[i];
    }

    cin >> n2;

    for (int i = 0; i < n2; i++) {
        cin >> a2[i];
    }

    // 找出不是两个数组共有的元素
    for (int i = 0; i < n1; i++) {
        bool flag = false;
        for (int j = 0; j < n2; j++) {
            if (a1[i] == a2[j]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            a3[n3++] = a1[i];
        }
    }

    for (int i = 0; i < n2; i++) {
        bool flag = false;
        for (int j = 0; j < n1; j++) {
            if (a2[i] == a1[j]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            a3[n3++] = a2[i];
        }
    }

    // 去重
    for (int i = 0; i < n3; i++) {
        for (int j = 0; j < i; j++) {
            if (a3[i] == a3[j]) {
                n3--;
                for (int k = i; k < n3; k++) {
                    a3[k] = a3[k + 1];
                }
                i--;
                break;
            }
        }
    }

    for (int i = 0; i < n3; i++) {
        cout << a3[i] << (i == n3 - 1 ? endl : ' ');
    }

    return 0;
}
