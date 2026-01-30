#include <simplecpp>
main_program {
    long long result;
    cin >> result;
    char op;
    while (true) {
        cin >> op;
        if (op == '?')
            break;
        long long num;
        cin >> num;
        if (op == '+')
            result += num;
        else if (op == '-')
            result -= num;
    }
    cout << result;
}
