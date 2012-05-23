#ifndef POINTSTACK_H
#define POINTSTACK_H

#include "stack.h"

/// Element class
struct Node
{
    Node()
    {
        value = 0;
        pNext = 0;
    }

    int value;
    Node *pNext;
};

/**
@class PointStack
The class inherited from Stack, allowing to work with a stack on lists
*/

class PointStack : public Stack
{
public:
    PointStack();
    ~PointStack();
    void push(int val);
    int pop();
    int length();
private:
    Node *top;
    int len;
};

#endif // POINTSTACK_H
