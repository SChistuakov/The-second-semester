#ifndef HASHFUNCTION_H
#define HASHFUNCTION_H

#include <string>

using namespace std;

class Function
{
public:
    virtual ~Function(){}
    virtual int getIndex(string str) = 0;
};

#endif // HASHFUNCTION_H
