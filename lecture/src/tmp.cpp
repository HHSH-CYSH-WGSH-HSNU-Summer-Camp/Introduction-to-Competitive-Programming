struct test {
    int a, b, c;
} A, B;

test operator +(test _a, test _b) {
    test res;
    res.a = _a.a + _b.a;
    res.b = _a.b + _b.b;
    return res;
}
