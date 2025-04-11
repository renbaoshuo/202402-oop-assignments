template <class T>
T m(T t, int task) {
    T a, b;

    cin >> a >> b;

    return task == 1 ? std::max(a, b) : std::min(a, b);
}
