#include <simplecpp>
main_program {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        for (int star = 0; star < 2*i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }
    int trunkHeight = n / 2;
    for (int i = 0; i < trunkHeight; i++) {
        for (int s = 0; s < n - 2; s++) {
            cout << " ";
        }
        cout << "***" << endl;
    }
}
