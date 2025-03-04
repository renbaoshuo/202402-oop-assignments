int cmp(const void *x, const void *y) {
    return *(int *)y - *(int *)x;
}

double getScore(int *score, int total) {
    qsort(score, total, sizeof(int), cmp);
    double res = 0;
    for (int i = 1; i < total - 1; i++) {
        res += score[i];
    }
    res /= total - 2;
    return res;
}
