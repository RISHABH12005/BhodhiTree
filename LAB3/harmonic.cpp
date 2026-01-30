#include <simplecpp>
main_program {
    int N;
    cin >> N;
    double sum = 0.0;
    int i = 1;
    repeat(N) {
        if (i % 2 == 1)
            sum = sum + 1.0 / i;
        else
            sum = sum - 1.0 / i;
        i++;
    }
    cout << sum;
}
