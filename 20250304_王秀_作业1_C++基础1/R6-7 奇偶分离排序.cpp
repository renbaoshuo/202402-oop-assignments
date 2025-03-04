#include <stdlib.h>

int cmp1(const void *x, const void *y) {
    return *(int *)x - *(int *)y;
}

int cmp2(const void *x, const void *y) {
    return *(int *)y - *(int *)x;
}

void sort_array(int *a) {
    int *a1 = (int *)malloc(10 * sizeof(int));
    int *a2 = (int *)malloc(10 * sizeof(int));
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            a1[cnt1++] = a[i];
        } else {
            a2[cnt2++] = a[i];
        }
    }

    qsort(a1, cnt1, sizeof(int), cmp1);
    qsort(a2, cnt2, sizeof(int), cmp2);

    for (int i = 0; i < cnt2; i++) {
        cout << a2[i];

        if (i == cnt2 - 1 && cnt1 == 0) cout << '\n';
        else cout << ' ';
    }

    for (int i = 0; i < cnt1; i++) {
        cout << a1[i];

        if (i == cnt1 - 1) cout << '\n';
        else cout << ' ';
    }

    free(a1);
    free(a2);
}
