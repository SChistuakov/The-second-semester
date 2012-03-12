#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include "list.h"

class ArrayList : public List
{
public:
    ArrayList();
    void add(int val);
    void remove(int val);
    bool exist(int val);
    int length();
private:
    int size = 200;
    int limit;
    int array[size];

};

#endif // ARRAYLIST_H
