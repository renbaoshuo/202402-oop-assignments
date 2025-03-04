#include <stdlib.h>

int cmp(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

void sort(int a[], int n) {
    qsort(a, n, sizeof(int), cmp);
}
