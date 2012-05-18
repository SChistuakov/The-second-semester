#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include <Comparator.h>
#include <list.h>
template<class T>

class BubbleSort
{
public:
    void Sort(List<T> *l,Comparator<T> *c);
private:
    static void swap(T &a, T &b);
};

template<class T>
void BubbleSort<T>::swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<class T>
void BubbleSort<T>::Sort(List<T> *l, Comparator<T> *c)
{
    for (List<T> *i = l->next; i; i = i->next)
        for (List<T> *j = i->next; j; j = j->next)
            if (c->comp(i->val, j->val))
                    swap(i->val, j->val);
}

#endif // BUBBLESORT_H
