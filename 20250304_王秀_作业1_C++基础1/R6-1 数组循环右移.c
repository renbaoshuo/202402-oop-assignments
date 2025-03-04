#include <stdlib.h>
#include <string.h>

void ArrayShift(int a[], int n, int m) {
    int *p = malloc(n * sizeof(int));
    m %= n;
    memcpy(p + m, a, (n - m) * sizeof(int));
    memcpy(p, a + (n - m), m * sizeof(int));
    memcpy(a, p, n * sizeof(int));
    free(p);
}
