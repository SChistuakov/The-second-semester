#pragma once

#include "pair.h"

class ComplexNumber : public Pair
{
public:
    ComplexNumber():Pair(){}
    ComplexNumber(float a, float b):Pair(a, b){}

    ComplexNumber operator*(ComplexNumber p) const;
    float module();

};

