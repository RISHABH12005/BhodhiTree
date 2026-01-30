#include <simplecpp>
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
main_program {
    int A, B;
    cin >> A >> B;
    int g = gcd(A, B);
    int l = lcm(A, B);
    cout << g << " " << l;
}
