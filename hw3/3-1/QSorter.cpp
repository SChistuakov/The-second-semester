#include "qsorter.h"

void QSorter::qSort(int a[], int left, int right)
{
    if (left < right)
    {
        int i = left - 1;
        for (int j = left; j < right; j++)
            if (a[j] <= a[right])
            {
                ++i;
                swap(a[i], a[j]);
            }
        ++i;
        swap(a[i], a[right]);
        qSort(a, left, i - 1);
        qSort(a, i + 1, right);
    }
}
