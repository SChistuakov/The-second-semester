#include "func1.h"
#include "hash.h"

int Function1::getIndex(string str)
{
    int res = 0;
    for (int i = 0; i < str.length(); i++)
        res = (res + str.data()[i]) % SIZE;

    return res;
}
