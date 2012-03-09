#pragma once;
#include "LinkedList.h"

LinkedList::LinkedList()
{
    next = 0;
    value = 0;
}

LinkedList::~LinkedList()
{
    delete next;
}

void LinkedList::add(int val)
{
    LinkedList* temp = new LinkedList;
    temp->value = val;
    if (!next)
    {
        next = temp;
    }
    else
    {
        temp->next = next;
        next = temp;
    }
}

void LinkedList::remove(int val)
{
    LinkedList* temp = this;
    while(temp->next && temp->next->value != val)
    {
        temp = temp->next;
    }
    if (temp->next && temp->next->value == val)
    {
        LinkedList* tmp = temp->next;
        temp->next = temp->next->next;
        tmp->next = 0;
        delete tmp; {delete next;}
    }
}

bool LinkedList::exist(int val)
{
    LinkedList* temp = next;
    while (temp)
    {
        if (temp->value == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int LinkedList::length()
{
    int length = 0;
    LinkedList* temp = next;
    while (temp)
    {
        length++;
        temp = temp->next;
    }
    return length;
}
