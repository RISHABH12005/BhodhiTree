#include <simplecpp>
main_program {
    int n;
    cin >> n;
    int fact = 1;
    int i = 1;
    repeat(n) {
        fact = fact * i;
        i++;
    }
    cout << fact;
}
