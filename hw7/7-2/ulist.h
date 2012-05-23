#ifndef ULIST_H
#define ULIST_H

#include "list.h"

class UList : List
{
public:
    void add(int val);
    void remove(int val);
    class WrongAdd {};
    class WrongRemove {};
};

#endif // ULIST_H
