class Square : public Rectangle {
  public:
    Square() {}

    Square(double _height) {
        height = _height;
        width = _height;
    }

    void Print() {
        cout << "Side=" << width << endl;
    }
};

class Circle : public Shape {
  protected:
    double x, y, r;

  public:
    Circle() {}

    Circle(double x, double y, double r) : x(x), y(y), r(r) {}

    void Print() {
        cout << "Center=[" << x << "," << y << "],Adius=" << r << endl;
    }

    double getArea() {
        return PI * r * r;
    }

    double getPerimeter() {
        return 2 * PI * r;
    }
};
