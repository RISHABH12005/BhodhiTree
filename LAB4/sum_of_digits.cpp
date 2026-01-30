#include <simplecpp>
main_program {
    int n;
    cin >> n;
    int sum = 0;
    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    cout << sum;
}
