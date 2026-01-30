#include <simplecpp>
main_program {
    int n;
    cin >> n;
    double x;
    cin >> x;
    double a;
    cin >> a;
    double result = a;
    int i = 1;
    repeat(n) {
        cin >> a;
        result = result * x + a;
        i++;
    }
    cout << result;
}
