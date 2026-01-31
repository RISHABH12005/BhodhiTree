#include <simplecpp>
main_program {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            if (j % 2 == 0)
                cout << "O";
            else
                cout << "X";
        }
        cout << endl;
    }
}
