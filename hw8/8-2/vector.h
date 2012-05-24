#pragma once
#include "iostream"
#include "sstream"
using namespace std;
template <class T, int SIZE>
class Vector
{
    /// class Vector with methods of addition, subtraction, scalar multiplication and check on a NULL vector.
    /// copy constructor is realized.
public:
    Vector(const Vector<T, SIZE> &copy); /// copy constructor
    Vector();
    Vector(const T *v, int length); /// constructor which fills the vector array
    Vector<T, SIZE> addition(const Vector<T, SIZE> &second) const; /// returns the result of addition
    Vector<T, SIZE> subtract(const Vector<T, SIZE> &second) const; /// returns the result of subtraction
    T scalarMultiply(const Vector<T, SIZE> &second) const; /// returns the result of multiplication of vector and scalar
    bool isNull(); /// method that checks the vector to null
    std::string print();
private:
    T vector[SIZE]; /// vector coordinates

};

template <class T, int SIZE>
Vector<T, SIZE>::Vector(const Vector<T, SIZE> &copy)
{
    for (int i = 0; i < SIZE; i++)
        vector[i] = copy.vector[i];
}

template <class T, int SIZE>
Vector<T, SIZE>::Vector()
{
    for (int i = 0; i < SIZE; i++)
        vector[i] = 0;
}

template <class T, int SIZE>
Vector<T, SIZE>::Vector(const T *v, int length)
{
    for (int i = 0; i < SIZE && i < length; i++)
        vector[i] = v[i];
    if (SIZE > length)
        for(int i = length; i < SIZE; i++)
            vector[i] = 0;
}

template<class T, int SIZE>
Vector<T, SIZE> Vector<T, SIZE>::addition(const Vector<T, SIZE> &second) const
{
    Vector<T, SIZE> result;
    for (int i = 0; i < SIZE; i++)
        result.vector[i] = vector[i] + second.vector[i];
    return result;
}

template<class T, int SIZE>
Vector<T, SIZE> Vector<T, SIZE>::subtract(const Vector<T, SIZE> &second) const
{
    Vector<T, SIZE> result;
    for (int i = 0; i < SIZE; i++)
        result.vector[i] = vector[i] - second.vector[i];
    return result;
}

template<class T, int SIZE>
T Vector<T, SIZE>::scalarMultiply(const Vector<T, SIZE> &second) const
{
    T result = 0;
    for (int i = 0; i < SIZE; i++)
        result = result + vector[i] * second.vector[i];
    return result;
}

template <class T, int SIZE>
bool Vector<T, SIZE>::isNull()
{
    for (int i = 0; i < SIZE; i++)
        if (vector[i] != 0)
            return false;
    return true;
}

template <class T, int SIZE>
std::string Vector<T, SIZE>::print()
{
    std::stringstream out;
    out << "<";
    for (int i = 0; i < SIZE; i++)
        if (i == SIZE - 1)
            out << vector[i];
        else
            out << vector[i] << ", ";
    out << ">" << endl;
    return out.str();
}
