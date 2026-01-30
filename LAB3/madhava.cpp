#include <simplecpp>
main_program {
    int N;
    cin >> N;
    double sum = 0.0;
    int sign = 1;      
    int denom = 1;     
    int i = 1;
    repeat(N) {
        sum = sum + sign * (1.0 / denom);
        sign = -sign;      
        denom = denom + 2; 
        i++;
    }
    double pi = 4 * sum;
    cout << pi;
}
