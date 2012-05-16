#ifndef QSorter_H
#define QSorter_H

#pragma once
#include "sorter"

class QSorter : public Sorter
{
    public:
        void sort(int a[], int n)
        {
            qSort(a, 0, n - 1);
            return;
        }
    protected:
        void swap(int &a, int &b);
    private:
        void qSort(int a[], int left, int right);
};

#endif // QSorter_H
