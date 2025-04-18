#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

struct Point {
    int x, y;

    Point() : x(0), y(0) {}

    Point(int x, int y) : x(x), y(y) {}
};

class Rectangle : private Point {
  protected:
    int length, width;

  public:
    Rectangle() : Point(), length(0), width(0) {}

    Rectangle(int x, int y, int length, int width) : Point(x, y), length(length), width(width) {}

    Point getRightUpPoint() const {
        return Point(x + length, y + width);
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, y1, length, width;

    cin >> x1 >> y1 >> length >> width;

    Rectangle rect(x1, y1, length, width);
    Point rightUpPoint = rect.getRightUpPoint();

    cout << rightUpPoint.x << ' ' << rightUpPoint.y << endl;

    return 0;
}
