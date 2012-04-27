#ifndef SORTING_H
#define SORTING_H

#pragma once

class Sorting
{
    public:
        virtual void sort(int a[], int b) = 0;

    protected:
        void swap(int &a, int &c)
        {
            int tmp = a;
            a = c;
            c = tmp;
        }

};

#endif // SORTING_H
