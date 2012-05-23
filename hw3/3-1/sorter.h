#ifndef SORTING_H
#define SORTING_H

#pragma once

class Sorter
{
    /**
      Base class with virtual void Sort
      */
    public:
        virtual void sort(int a[], int n) = 0;
    protected:
        void swap(int &a, int &b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
};

#endif // SORTING_H
