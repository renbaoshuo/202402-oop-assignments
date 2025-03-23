#include <iostream>
using namespace std;

class Point {
  private:
    int x, y;

  public:
    Point(int x, int y)
        : x(x), y(y) {}

    void move(int dx, int dy) {
        x += dx;
        y += dy;
    }

    void print() {
        cout << x << " " << y << endl;
    }
};

int main() {
    int x, y, dx, dy;

    cin >> x >> y;
    cin >> dx >> dy;

    Point point(x, y);

    point.move(dx, dy);

    point.print();

    return 0;
}
