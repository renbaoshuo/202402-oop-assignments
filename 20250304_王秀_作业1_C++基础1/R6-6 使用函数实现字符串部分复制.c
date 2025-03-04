#include <string.h>

void strmcpy(char *t, int m, char *s) {
    int n = strlen(t);
    if (m <= n)
        memcpy(s, t + m - 1, n - m + 1);
    s[n - m + 1] = '\0';
}
