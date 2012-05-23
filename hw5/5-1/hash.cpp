#include "hash.h"


void Hash::add(string str)
{
     table[func->getIndex(str)].add(str);
}

void Hash::remove(string str)
{
    table[func->getIndex(str)].remove(str);
}

bool Hash::exist(string str)
{
    return table[func->getIndex(str)].exist(str);
}

void Hash::setFunc(Function *f)
{
    func = f;
}
