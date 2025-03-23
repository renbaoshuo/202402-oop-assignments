#include <iostream>

using namespace std;

int A[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int B[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

class Date {
    int year, month, day;

  public:
    Date(int y, int m, int d)
        : year(y), month(m), day(d) {}

    void show() {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            for (int i = 0; i < month - 1; i++) {
                day += A[i];
            }
        } else {
            for (int i = 0; i < month - 1; i++) {
                day += B[i];
            }
        }

        cout << day << endl;
    }
};

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    while (a != 0 && b != 0 && c != 0) {
        Date d(a, b, c);
        d.show();
        cin >> a >> b >> c;
    }

    return 0;
}
