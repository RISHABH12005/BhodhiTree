#include <simplecpp>
main_program {
    int n;
    cin >> n;
    int i = 1;
    repeat(n) {
        int j = 1;
        repeat(i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}