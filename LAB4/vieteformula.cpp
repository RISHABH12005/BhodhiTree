#include <simplecpp>
main_program {
    int n;
    cin >> n;
    double value = 0.0;
    double product = 1.0;
    int i = 1;
    repeat(n) {
        value = sqrt(2 + value);
        product = product * (value / 2);
        i++;
    }
    double rounded = floor(product * 1000000 + 0.5) / 1000000;
    cout << rounded;
}
