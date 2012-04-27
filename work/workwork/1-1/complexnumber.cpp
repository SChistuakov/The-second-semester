#include "complexnumber.h"
#include "math.h"

ComplexNumber ComplexNumber::operator*(ComplexNumber p) const
{
    ComplexNumber tmp;
    tmp.a = this->a * p.a - this->b * p.b;
    tmp.b = this->a * p.b + this->b * p.a;
    return tmp;
}

float ComplexNumber::module()
{
    return sqrt((this->a * this->a) + (this->b * this->b));
}
