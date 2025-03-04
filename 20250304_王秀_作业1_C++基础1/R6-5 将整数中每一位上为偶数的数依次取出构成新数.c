void fun(long s, long *t) {
    int r = 0;
    while (s) {
        int x = s % 10;
        if (x % 2 == 0) {
            r = r * 10 + x;
        }
        s /= 10;
    }
    *t = 0;
    while (r) {
        *t = *t * 10 + (r % 10);
        r /= 10;
    }
}
