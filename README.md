# p5.js-c

 Use the [p5.js JavaScript library](https://p5js.org/reference/) -- from C!

### Why?

Just in case you ever wanted to write this

```C
#include "p5.h"

#define WIDTH 400
#define HEIGHT 400

p5_SETUP(
    createCanvas(WIDTH, HEIGHT);
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

int main(int argc, char **argv) {
    draw_surprised_face(WIDTH / 2, HEIGHT / 2);
    return 0;
}
```

and then compile it

```bash
$ make
emcc -Wall --shell-file template.html *.c -o dist-web/index.html
```

to produce this:

![surprised face canvas](docs/img/surprised_face_canvas.png?raw=true "JS Canvas with Surprised Face Drawing")
