#include "BubbleS.h"

void BubbleS::sort(int a[], int b)
{
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = 0; i < b - 1; ++i)
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                flag = true;
            }
    }
}
