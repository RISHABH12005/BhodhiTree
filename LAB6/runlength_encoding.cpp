#include <simplecpp>
main_program {
    string s;
    cin >> s;
    int count = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '.')
            break;
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            cout << count << s[i - 1];
            count = 1;
        }
    }
    cout << count << s[s.size() - 2];
}
