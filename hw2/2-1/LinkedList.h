#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "list.h"

class LinkedList : public List
{
public:
    LinkedList();
    ~LinkedList();
    void add(int val);
    void remove(int val);
    bool exist(int val);
    int length();
private:
    int  value;
    LinkedList* next;
};

#endif // LINKEDLIST_H
