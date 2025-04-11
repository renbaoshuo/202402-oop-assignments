#include <iostream>

using namespace std;

class Time {
  private:
    int minutes, seconds;

  public:
    Time(int m = 0, int s = 0) : minutes(m), seconds(s) {}

    int toTotalSeconds() const {
        return minutes * 60 + seconds;
    }

    int operator-(const Time &other) const {
        return this->toTotalSeconds() - other.toTotalSeconds();
    }
};

int main() {
    int startMin, startSec, endMin, endSec;

    while (cin >> startMin >> startSec >> endMin >> endSec, startMin || startSec || endMin || endSec) {
        Time start(startMin, startSec);
        Time end(endMin, endSec);

        cout << end - start << endl;
    }

    return 0;
}
