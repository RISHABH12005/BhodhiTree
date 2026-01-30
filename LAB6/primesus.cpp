#include <simplecpp>
main_program {
    int n;
    cin >> n;
    bool prime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    if (prime)
        cout << "sus";
    else
        cout << "not sus";
}
