#include <emscripten.h>
#include <emscripten/bind.h>
#include "Calculator.h"

using namespace emscripten;

EMSCRIPTEN_BINDINGS(Calculator) 
{
    function("add", optional_override([](int a, int b) -> int 
    {
        return Calculator::add<int>(a, b);
    }));

    function("add", optional_override([](float a, float b) -> float 
    {
        return Calculator::add<float>(a, b);
    }));

    function("subtract", optional_override([](int a, int b) -> int 
    {
        return Calculator::subtract<int>(a, b);
    }));

    function("subtract", optional_override([](float a, float b) -> float 
    {
        return Calculator::subtract<float>(a, b);
    }));

}