#include <simplecpp>
main_program {
    int n;
    cin >> n;
    double a, b;
    cin >> a >> b;
    if (n == 1) {
        cout << a + b;
    }
    else if (n == 2) {
        cout << a - b;
    }
    else if (n == 3) {
        cout << a * b;
    }
    else if (n == 4) {
        if (b == 0)
            cout << "Error";
        else
            cout << a / b;
    }
    else if (n == 5) {
        if (b == 0)
            cout << "Error";
        else
            cout << fmod(a, b);
    }
}
