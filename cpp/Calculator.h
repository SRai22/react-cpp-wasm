#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator
{
public:
    Calculator() {}
    ~Calculator() {}
    template <class T>
    static T add(T a, T b);
    template <class T>
    static T subtract(T a, T b);
};

#endif