#ifndef SORTING_H
#define SORTING_H

#pragma once

class Sorting
{
    /**
      Base class
      */
public:
    virtual int **sort(int **array, int length) = 0;
    virtual ~Sorting() {}
protected:
    static void swap(int *&a, int *&b);
};

#endif // SORTING_H
