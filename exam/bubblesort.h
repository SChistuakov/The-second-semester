#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "list.h"
#include "comp.h"

template<class T>
class BubbleSort
{
public:
    void sort(List<T> *list,BComp<T> *comp);
};


template<class T>
void BubbleSort<T>::sort(List<T> *list, BComp<T> *comp)
{
    List<T> *i = list->next;
    List<T> *j = 0;

    while(i)
    {
        j = i->next;
        while(j)
        {
            if (comp->comp(i->value, j->value))
            {
                int tmp = i->value;
                i->value = j->value;
                j->value = tmp;
            }
            j = j->next;
        }
        i = i->next;
    }
}



#endif // BUBBLESORT_H
