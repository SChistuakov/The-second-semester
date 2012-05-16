#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <string>

using namespace std;

/// base Tree class
class BaseTree
{
public:
    BaseTree():left(0), right(0)
    {
    }

    virtual ~BaseTree()
    {
        delete left;
        delete right;
    }
    virtual int calc() = 0;
    virtual void print() = 0;
protected:
    BaseTree *left;
    BaseTree *right;
};

/// number class
class Num: public BaseTree
{
public:
    Num(int v)
    {
        val = v;
    }

    int calc();
    void print();
private:
    int val;
};

/// operation class
class Operation: public BaseTree
{
public:
    Operation():op('+'){}

    int calc();
    void print();

    /// build tree from string
    void build(string &s);
private:
    char op;
};


#endif // TREE_H
