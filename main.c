#include "p5.h"

p5_SETUP(
    createCanvas(400, 400);
    background(0);
);

FUNCTION(void, draw_surprised_face, (int x, int y), 
    noFill();
    stroke(255);
    circle(x, y, 80); // Head outline.
    fill(255);
    circle(x - 20, y - 10, 10); // Left eye.
    circle(x + 20, y - 10, 10); // Right eye.
    ellipse(x, y + 10, 30, 10); // Mouth.
);

int main() {
    draw_surprised_face(200, 200);
    return 0;
}