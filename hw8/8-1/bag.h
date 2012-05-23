#pragma once
#include <set>

template<class T>
class Bag
{
    /** Bag (multiset)
      Class Bag, storing a multiset
      (using reference STL Container: Set)
      */
public:
    ~Bag(){}
    bool isEmpty() const;
    void insert(const T&);
    void erase(const T&);
    void eraseAll(const T&);
    bool find(const T&) const;
    int quantity(const T&) const;
    void clear();
private:
    std::multiset<T> MSet;
};


template<class T>
bool Bag<T>::isEmpty() const
{
    return MSet.empty();
}

template<class T>
void Bag<T>::insert(const T& val)
{
    MSet.insert(val);
}

template<class T>
void Bag<T>::erase(const T& val)
{
    typename std::multiset<T>::iterator it = MSet.find(val);
    MSet.erase(it);
}
template<class T>
void Bag<T>::eraseAll(const T& val)
{
    MSet.erase(val);
}

template<class T>
void Bag<T>::clear()
{
    MSet.clear();
}

template<class T>
int Bag<T>::quantity(const T& val) const
{
    return (int) MSet.count(val);
}

template<class T>
bool Bag<T>::find(const T& val) const
{
    return MSet.end() != MSet.find(val);
}
