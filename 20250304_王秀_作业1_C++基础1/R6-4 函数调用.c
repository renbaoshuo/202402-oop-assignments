int max(int a, int b) {
    if (a >= b) return a;
    else return b;
}

int min(int a, int b) {
    if (a >= b) return b;
    else return a;
}

int sum(int a, int b) {
    return a + b;
}

int compute(int a, int b, int (*func)(int, int)) {
    return func(a, b);
}
