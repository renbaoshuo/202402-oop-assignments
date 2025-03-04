#include <iostream>
#include <algorithm>

using namespace std;

int myMax(int x, int y) {
    return std::max(x, y);
}

int myMax(int x, int y, int z) {
    return std::max({x, y, z});
}

double myMax(double x, double y) {
    return std::max(x, y);
}
