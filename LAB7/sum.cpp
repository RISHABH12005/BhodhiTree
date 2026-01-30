#include <simplecpp>
float sum(float a, float b) {
    return a + b;
}
main_program {
    float a, b;
    cin >> a >> b;
    float result = sum(a, b);
    cout << result;
}
