#include <iostream>

using namespace std;

class Complex {
  public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex &other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-=(const Complex &other) {
        real -= other.real;
        imag -= other.imag;
        return *this;
    }

    friend Complex operator-(const Complex &c1, const Complex &c2) {
        return Complex(c1.real - c2.real, c1.imag - c2.imag);
    }

    void Display() const {
        cout << "(" << real << ", " << imag << ")" << endl;
    }

  private:
    double real, imag;
};

int main() {
    double r, m;
    cin >> r >> m;
    Complex c1(r, m);
    cin >> r >> m;
    Complex c2(r, m);
    Complex c3 = c1 + c2;
    c3.Display();
    c3 = c1 - c2;
    c3.Display();
    c3 -= c1;
    c3.Display();
    return 0;
}
