#include <emscripten.h>

#define p5_SETUP(function_body) \
EM_JS(void, setup, (), { \
    function_body \
});

#define p5_DRAW(function_body) \
EM_JS(void, draw, (), { \
    function_body \
});

#define CLASS(name, args, constructor_body) \
EM_JS(void, name, args, { \
    constructor_body \
});

#define FUNCTION(return_type, name, args, function_body) \
EM_JS(return_type, name, args, { \
    function_body \
});