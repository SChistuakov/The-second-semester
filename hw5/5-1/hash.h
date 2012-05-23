#ifndef STRINGHASH_H
#define STRINGHASH_H

#include <string>
#include "list.h"
#include "func.h"

const int SIZE = 444;

using namespace std;

class Hash
{
public:
    void add(string str);
    void remove(string str);
    bool exist(string str);
    void setFunc(Function *f);
private:

    Function *func;
    List table[SIZE];
};

#endif // STRINGHASH_H
