#include <simplecpp>
main_program {
    int N;
    cin >> N;
    double product = 1.0;
    int i = 1;
    repeat(N) {
        double numerator = 2.0 * ((i + 1) / 2);
        double denominator = 2.0 * (i / 2) + 1;
        product = product * (numerator / denominator);
        i++;
    }
    double pi = 2 * product;
    cout << pi;
}
