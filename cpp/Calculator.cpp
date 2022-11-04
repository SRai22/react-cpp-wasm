#include "Calculator.h"

template <class T>
T Calculator::add(T a, T b)
{
    return a+b;
}

template <class T>
T Calculator::subtract(T a, T b)
{
    return a-b;
}

template int Calculator::add<int>(int a, int b);
template int Calculator::subtract<int>(int a, int b);
template float Calculator::add<float>(float a, float b);
template float Calculator::subtract<float>(float a, float b);