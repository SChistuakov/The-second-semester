#include "ulist.h"

void UList::add(int val)
{
    if (exist(val))
        throw WrongAdd();
    else
        List::add(val);
}

void UList::remove(int val)
{
    if (exist(val))
        List::remove(val);
    else
        throw WrongRemove();
}
