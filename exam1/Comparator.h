#ifndef COMPOBJECT_H
#define COMPOBJECT_H

template<class T>
class Comparator
{
public:
    virtual ~Comparator(){}
    virtual bool comp(T a, T b) = 0;
};

#endif // COMPOBJECT_H
