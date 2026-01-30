#include <simplecpp>
main_program {
    int N;
    cin >> N;
    int temp = N;
    int sum = 0;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (N % sum == 0)
        cout << "YES";
    else
        cout << "NO";
}
