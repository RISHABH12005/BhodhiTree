#include <simplecpp>
main_program {
    int n;
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0 && n % 84 != 0)
        cout << 1;
    else
        cout << 0;
}
