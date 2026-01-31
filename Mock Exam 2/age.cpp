#include <simplecpp>
main_program {
    int age;
    cin >> age;
    if (age < 13)
        cout << "child";
    else if (age <= 19)
        cout << "teenager";
    else
        cout << "adult";
}
