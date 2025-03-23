#include <iostream>

using namespace std;

class Date {
  private:
    int year, month, day;

  public:
    Date(int y, int m, int d)
        : year(y), month(m), day(d) {}

    bool isLeap() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    int year, month, day;

    cin >> year >> month >> day;

    Date date(year, month, day);

    if (date.isLeap()) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
