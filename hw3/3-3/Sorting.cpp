#include "Sorting.h"

void Sorting::swap(int *&a, int *&b)
{
    int *tmp = a;
    a = b;
    b = tmp;
}
