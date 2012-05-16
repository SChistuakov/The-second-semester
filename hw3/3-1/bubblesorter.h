#ifndef BubbleSorter_H
#define BubbleSorter_H

#pragma once
#include "sorter"

class BubbleSorter : public Sorter
{
    public:
        void sort(int a[], int n);
    protected:
        void swap(int &a, int &b);
};


#endif // BubbleSorter_H
