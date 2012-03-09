#include "LinkedList.h"
#include <stdio.h>

int main()
{
    List * newList = new LinkedList();
    newList->add(5);
    newList->add(7);
    printf ("%d", newList->length());
    return 0;
}
