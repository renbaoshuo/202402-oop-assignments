class MyDate {
  private:
    int day, month, year;
    static const int daysInMonth[12];
    static const string monthNames[12];

    static bool isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    static bool isValidDate(int m, int d, int y) {
        if (y < 0 || m < 1 || m > 12 || d < 1) return false;
        if (m == 2 && isLeapYear(y)) {
            return d <= 29;
        } else {
            return d <= daysInMonth[m - 1];
        }
    }

    void incrementDay() {
        day++;
        if (month == 2 && isLeapYear(year)) {
            if (day > 29) {
                day = 1;
                month++;
            }
        } else {
            if (day > daysInMonth[month - 1]) {
                day = 1;
                month++;
            }
        }
        if (month > 12) {
            month = 1;
            year++;
        }
    }

  public:
    MyDate() : day(1), month(1), year(1900) {}

    void setDate(int m, int d, int y) {
        if (isValidDate(m, d, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            day = 1;
            month = 1;
            year = 1900;
        }
    }

    MyDate& operator+=(int daysToAdd) {
        for (int i = 0; i < daysToAdd; ++i) {
            incrementDay();
        }
        return *this;
    }

    MyDate& operator++() {
        incrementDay();
        return *this;
    }

    MyDate operator++(int) {
        MyDate temp = *this;
        incrementDay();
        return temp;
    }

    friend ostream& operator<<(ostream& os, const MyDate& date) {
        os << MyDate::monthNames[date.month - 1] << " " << date.day << ", " << date.year;
        return os;
    }
};

const int MyDate::daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const string MyDate::monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
