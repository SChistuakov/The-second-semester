#ifndef BUBBLES_H
#define BUBBLES_H

#pragma once

#include "Sorting.h"

class BubbleS : public Sorting
{
    public:
        void sort(int a[], int b);

    protected:
        void swap(int &a, int &c);

};

#endif // BUBBLES_H
