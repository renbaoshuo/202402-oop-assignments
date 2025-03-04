template <class T>
T m(T t, int task) {
    T a, b;

    cin >> a >> b;

    if (task == 1) return std::max(a, b);
    return std::min(a, b);
}
