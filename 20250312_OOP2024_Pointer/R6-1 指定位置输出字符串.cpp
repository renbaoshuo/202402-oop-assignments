char *match(char *s, char ch1, char ch2) {
    char *p = NULL;

    for (p = s; *p != '\0'; p++) {
        if (*p == ch1) {
            char *q = p;

            putchar(ch1);

            while (*q != ch2) {
                q++;
                if (*q == '\0') break;
                putchar(*q);
            }

            putchar('\n');

            return p;
        }
    }

    putchar('\n');

    return p;
}
