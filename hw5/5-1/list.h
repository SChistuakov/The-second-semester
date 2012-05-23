#ifndef STRINGLIST_H
#define STRINGLIST_H

#include <string>

using namespace std;

class List
{
public:
    int count;
    string value;
    List *next;

    List(): count(0), next(0){}
    ~List();
    void add(string s);
    void remove(string s);
    bool exist(string s);
};

#endif // STRINGLIST_H
