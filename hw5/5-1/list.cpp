#include "list.h"

List::~List()
{
    delete next;
}

void List::add(string s)
{
    List *temp = this;
    while (temp->next)
    {
        if (temp->next->value == s)
        {
            temp->next->count++;
            return;
        }
        temp = temp->next;
    }

    List *tmp = new List();
    tmp->count = 1;
    tmp->value = s;
    temp->next = tmp;
}

void List::remove(string s)
{
    List *temp = this;
    while(temp->next)
    {
        if (temp->next->value == s)
        {
            List *tmp = temp->next;
            temp->next = tmp->next;

            tmp->next = 0;
            delete tmp;
            return;
        }
        temp = temp->next;
    }
}

bool List::exist(string s)
{
    List *temp = next;

    while (temp)
    {
        if (temp->value == s)
            return true;
        temp = temp->next;
    }
    return false;
}
