#include <simplecpp>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
main_program {
    int A, B;
    cin >> A >> B;
    swap(&A, &B);
    cout << A << " " << B;
}
