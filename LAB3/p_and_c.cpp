#include <simplecpp>
long long factorial(int x) {
    long long f = 1;
    int i = 1;
    repeat(x) {
        f = f * i;
        i++;
    }
    return f;
}
main_program {
    int n, r;
    cin >> n >> r;
    long long nfact = factorial(n);
    long long rfact = factorial(r);
    long long nrfact = factorial(n - r);
    long long p = nfact / nrfact;
    long long c = nfact / (rfact * nrfact);
    cout << p << " " << c;
}
