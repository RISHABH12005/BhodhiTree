#include <simplecpp>
main_program {
    double a1, b1, c1;
    double a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    double D = a1*b2 - a2*b1;
    double x = (b1*c2 - b2*c1) / D;
    double y = (a2*c1 - a1*c2) / D;
    cout << x << " " << y;
}
