#ifndef COMPOBJECT_H
#define COMPOBJECT_H

template<class T>
class BComp
{
public:
    bool comp(T a, T b)
    {
        return a > b;
    }
};

#endif // COMPOBJECT_H
