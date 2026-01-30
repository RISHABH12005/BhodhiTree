#include <simplecpp>
void drawPolygon(Turtle &t, int n, double side) {
    double angle = 360.0 / n;
    repeat(n) {
        t.forward(side);
        t.right(angle);
    }
}
main_program {
    int n;
    cin >> n;
    initCanvas("Three Polygons", 800, 800);
    Turtle t1, t2, t3;
    t1.moveTo(400, 400);
    t2.moveTo(400, 400);
    t3.moveTo(400, 400);
    double side = 60;
    t2.right(120);
    t3.right(240);
    drawPolygon(t1, n, side);
    drawPolygon(t2, n, side);
    drawPolygon(t3, n, side);
    getClick();
}
