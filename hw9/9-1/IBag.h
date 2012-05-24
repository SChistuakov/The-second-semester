#pragma once
#include <set>

template<class T>
class Bag
{
    /** Bag (multiset)
      Class Bag, storing a multiset
      (using reference STL Container: Set)
      */

    /// *******************************************************************************
        class iterator
           {
            /** Interator
              the class, allowing to touch
              all elements of the class Bag
              */
           public:
               iterator() {}
               iterator(const iterator& it) : mIt(it.mIt) {}
               iterator(const typename std::multiset<T>::iterator& it) : mIt(it) {}
               iterator& operator=(const iterator& it);
               T operator*() { return *mIt; }
               iterator& operator++();
               const iterator operator++(int);
           private:
                typename std::multiset<T>::iterator mIt;
           };
    /// *******************************************************************************

public:
     ~Bag(){}
    bool isEmpty() const;
    void insert(const T&);
    void erase(const T&);
    void eraseAll(const T&);
    bool find(const T&) const;
    int quantity(const T&) const;
    void clear();
    iterator begin() { return iterator(MSet.begin()); }
    iterator end() { return iterator(MSet.end()); }
private:
    std::multiset<T> MSet;
    friend class BagTest;
};

template<class T>
typename Bag<T>::iterator& Bag<T>::iterator::operator++()
{
    ++mIt;
    return *this;
}
template<class T>
const typename Bag<T>::iterator Bag<T>::iterator::operator++(int)
{
    iterator temp = mIt++;
    return temp;
}

template<class T>
typename Bag<T>::iterator& Bag<T>::iterator:: operator=(const iterator& it)
{
    mIt = it.mIt;
    return mIt;
}

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


