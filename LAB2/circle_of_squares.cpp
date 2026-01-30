#include <simplecpp>
void drawSquare() {
    repeat(4) {
        forward(100);
        right(90);
    }
}
main_program {
    int n;
    cin >> n;
    initCanvas("Circle of Squares", 800, 800);
    Turtle t;
    t.penDown();
    t.moveTo(400, 400);
    double angle = 360.0 / n;
    repeat(n) {
        drawSquare();
        t.right(angle);
    }
    getClick();
}
