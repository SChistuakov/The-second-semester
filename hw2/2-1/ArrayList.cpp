#pragma once;
#include "ArrayList.h"

ArrayList::ArrayList()
{
    limit = 0;
}

void swap(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void ArrayList::add(int val)
{
    if (length() < size)
    {
        array[length()] = val;
        limit++;
    }
}

void ArrayList::remove(int val)
{
    int i = 0;
    while (i < length() && val != array[i])
    {
        i++;
    }
    if (i == length())
    {
        return;
    }
    while (i < length())
    {
        swap (&array[i], &array[i+1]);
        i++;
    }
    limit--;
}

bool ArrayList::exist(int val)
{
    for (int i = 0; i < length(); i++)
        if (array[i] == val)
        {
            return true;
        }
    return false;
}

int ArrayList::length()
{
    return limit;
}
