#include <simplecpp>
main_program {
    int N;
    cin >> N;
    int a = 1, b = 1;
    while (b < N) {
        int c = a + b;
        a = b;
        b = c;
    }
    cout << a;
}
