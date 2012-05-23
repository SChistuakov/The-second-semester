#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "stack.h"
#include "arraystack.h"
#include "pointstack.h"

/**
@class Calculator
The class calculating values of expression
*/

class Calculator
{
public:
    Calculator();
    ~Calculator();
    /// initialization, allowing to choose stack type
    void init(bool array = true);
    int calc(char *c);

    /// check on number
    static bool isDig(char c);
    /// check on a sign
    static bool isSign(char c);
private:
    Stack *st;
    int buf[100];
    char bufsize;

    void freeStack();
};

#endif // CALCULATOR_H
