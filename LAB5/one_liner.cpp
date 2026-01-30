#include <simplecpp>
main_program {
    double x1, y1, x2, y2, a, b;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> a >> b;
    double eps = 1e-6;
    double cross = (a - x1)*(y2 - y1) - (b - y1)*(x2 - x1);
    if (abs(cross) > eps) {
        cout << "False";
        return 0;
    }
    if (a >= min(x1, x2) - eps && a <= max(x1, x2) + eps &&
        b >= min(y1, y2) - eps && b <= max(y1, y2) + eps)
        cout << "True";
    else
        cout << "False";
}
