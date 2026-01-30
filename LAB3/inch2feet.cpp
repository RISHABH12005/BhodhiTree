#include <simplecpp>
main_program {
    int inches;
    cin >> inches;
    int feet = inches / 12;
    int rem_inches = inches % 12;
    cout << feet << " feet " << rem_inches << " inches";
}
