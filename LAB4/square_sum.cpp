#include <simplecpp>
main_program {
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;
    repeat(n) {
        sum = sum + (i * i);
        i++;
    }
    cout << sum;
}
