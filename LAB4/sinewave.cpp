#include <simplecpp>
main_program {
    double x0, x1, scale, stepsize;
    cin >> x0 >> x1 >> scale >> stepsize;
    initCanvas("Sine Wave", 800, 600);
    Turtle t;
    t.penDown();
    t.moveTo(100, 300);
    double x = x0;
    double y = sin(x);
    double total_length = 0.0;
    while (x + stepsize <= x1) {
        double x_next = x + stepsize;
        double y_next = sin(x_next);
        double dx = scale * stepsize;
        double dy = scale * (y_next - y);
        double segment = sqrt(dx*dx + dy*dy);
        total_length += segment;
        t.forward(segment);
        t.left(atan2(dy, dx) * 180 / PI - t.getHeading());
        x = x_next;
        y = y_next;
    }
    cout << total_length;
    getClick();
}
