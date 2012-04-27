#include "pair.h"

Pair::Pair():a(0), b(0)
{
}

Pair::Pair(float mA, float mB)
{
    a = mA;
    b = mB;
}

Pair Pair::operator+(Pair p) const
{
    Pair tmp;
    tmp.a = this->a + p.a;
    tmp.b = this->b + p.b;
    return tmp;
}

Pair Pair::operator-(Pair p) const
{
    Pair tmp;
    tmp.a = this->a - p.a;
    tmp.b = this->b - p.b;
    return tmp;
}

Pair Pair::operator*(float p) const
{
    Pair tmp;
    tmp.a = this->a * p;
    tmp.b = this->b * p;
    return tmp;
}

