#include <simplecpp>
void dashedSide(double len) {
    repeat(5) {
        forward(5);
        penUp();
        forward(5);
        penDown();
    }
}
void dashedPolygon(int n) {
    double angle = 360.0 / n;
    repeat(n) {
        dashedSide(50);
        right(angle);
    }
}
main_program {
    int n;
    cin >> n;
    initCanvas("Corner Pattern", 800, 800);
    Turtle t;
    t.penDown();
    t.moveTo(400, 400);
    repeat(n) {
        dashedPolygon(n);
        t.right(360.0 / n);
    }
    getClick();
}
