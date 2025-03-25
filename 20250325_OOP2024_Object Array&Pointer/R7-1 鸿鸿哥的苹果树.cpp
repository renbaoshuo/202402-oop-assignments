
#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

int peach[10];
int max_height;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 10; i++) {
        cin >> peach[i];
    }
    cin >> max_height;

    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (peach[i] <= max_height + 30) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
