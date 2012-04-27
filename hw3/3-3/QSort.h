#ifndef QSORT_H
#define QSORT_H

#pragma once

#include "Sorting.h"

class QSort : public Sorting
{
public:
    int **sort(int **array, int length);
private:
    static void qSort(int **array, int left, int right);
};

#endif // QSORT_H
