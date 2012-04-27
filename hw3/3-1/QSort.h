#ifndef qSort_H
#define qSort_H

#pragma once

#include "Sorting.h"

class qSorter : public Sorting
{
    public:
        void sort(int a[], int b)
        {
            qSort(a, 0, b - 1);
            return;
        }
    protected:
        void swap(int &a, int &c);
    private:
        void qSort(int a[], int left, int right);
};

#endif // qSort_H
