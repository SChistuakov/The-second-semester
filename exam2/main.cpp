#include <iostream>

#include "bubblesort.h"

using namespace std;

int main()
{
    List<int> *list = new List<int>;
    for (int i = 9; i > 0; i--)
    {
        list->add(i);
        cout << i << " ";
    }
    cout << endl;

    BubbleSort<int> sort;
    BComp<int> c;
    sort.sort(list, &c);

    List<int> *t = list->next;
    while (t)
    {
        cout << t->value << " ";
        t = t->next;
    }

    delete list;

    return 0;
}

