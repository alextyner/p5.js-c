#include "p5.hpp"

CLASS(Ball, (int x, int y, int r),
    this.x = x;
    this.y = y;
    this.r = r;
);

p5_SETUP(
    createCanvas(400, 400);
    let b = new Ball(20, 20, 20);
    console.log(b);
    console.log(5);
);

p5_DRAW(
    background(220);
);

int main() {
    
    return 0;
}