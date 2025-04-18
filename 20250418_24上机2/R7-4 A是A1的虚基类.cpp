#include <iostream>

using std::cin;
using std::cout;
const char endl = '\n';

class A {
  protected:
    int i;

  public:
    A(int i) : i(i) {
        cout << "Call A:i=" << i << endl;
    }

    void display() {
        cout << "i=" << i << endl;
    }
};

class A1 : public virtual A {
  protected:
    int j;

  public:
    A1(int i, int j) : A(i), j(j) {
        cout << "Call A1:i=" << i << endl;
    }

    void display() {
        cout << "j=" << j << endl;
    }
};

class A2 : public virtual A {
  protected:
    int k;

  public:
    A2(int i, int k) : A(i), k(k) {
        cout << "Call A2:i=" << i << endl;
    }

    void display() {
        cout << "k=" << k << endl;
    }
};

struct A3 : public A1, public A2 {
    A3(int i, int j, int k) : A(i), A1(i, j), A2(i, k) {
        cout << "Call A3:i=" << i << endl;
    }

    void display() {
        A::display();
        A1::display();
        A2::display();
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;

    cin >> a >> b >> c;

    A3 a3(a, b, c);

    a3.display();

    return 0;
}
