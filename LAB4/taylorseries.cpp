#include <simplecpp>
main_program {
    double x;
    cin >> x;
    double sum = 1.0;
    double term = 1.0;
    int i = 1;
    repeat(15) {
        term = term * x / i;
        sum = sum + term;
        i++;
    }
    cout << sum;
}
