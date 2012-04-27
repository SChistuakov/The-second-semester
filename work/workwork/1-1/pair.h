#pragma once
class Pair
{
public:
    float a;
    float b;

    Pair();
    Pair(float mA, float mB);
    virtual ~Pair(){}

    Pair operator+(Pair p) const;
    Pair operator-(Pair p) const;
    Pair operator*(float p) const;

};


