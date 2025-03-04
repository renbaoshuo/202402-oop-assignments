#include <algorithm>

bool s2(const Student &x, const Student &y) {
    int sx = x.score[0] + x.score[1];
    int sy = y.score[0] + y.score[1];

    if (sx == sy) return x.num < y.num;
    return sx > sy;
}

bool s4(const Student &x, const Student &y) {
    int sx = x.score[0] + x.score[1] + x.score[2] + x.score[3];
    int sy = y.score[0] + y.score[1] + y.score[2] + y.score[3];

    if (sx == sy) return x.num < y.num;
    return sx > sy;
}

int select(Student st[], int n, bool (*func)(const Student &, const Student &)) {
    std::sort(st, st + n, func);
    return st[0].num;
}
