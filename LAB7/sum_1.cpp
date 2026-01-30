#include <simplecpp>
int sum(int N) {
    int s = 0;
    for (int i = 1; i <= N; i++) {
        s += i;
    }
    return s;
}
main_program {
    int N;
    cin >> N;
    cout << sum(N);
}
