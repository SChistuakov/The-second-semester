#ifndef LIST_H
#define LIST_H

class List
{
public:
    virtual void add(int val) = 0;
    virtual void remove(int val) = 0;
    virtual bool exist(int val) = 0;
    virtual int length() = 0;
    virtual ~List();
};

#endif // LIST_H
