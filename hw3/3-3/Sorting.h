#ifndef SORTING_H
#define SORTING_H

#pragma once

class Sorting
{
public:
    virtual int **sort(int **array, int length) = 0;
protected:
    static void swap(int *&a, int *&b);
};

#endif // SORTING_H
