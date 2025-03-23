#include <iostream>
using namespace std;

class Box {
    float ab, volume, area;

  public:
    Box()
        : ab(0) {}

    void seta(float AB) {
        ab = AB;
    }

    void getvolume() {
        volume = ab * ab * ab;
    }

    void getarea() {
        area = ab * ab * 6;
    }

    void disp() {
        cout << volume << " " << area;
    }
};

int main() {
    float ab;

    cin >> ab;

    Box obj;

    obj.seta(ab);
    obj.getvolume();
    obj.getarea();
    obj.disp();

    return 0;
}
