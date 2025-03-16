int fac(int x) {
    int res = 1;

    while (x > 1) {
        res *= x--;
    }

    return res;
}

int FactorialSum(List L) {
    if (L == NULL) return 0;
    return FactorialSum(L->Next) + fac(L->Data);
}
