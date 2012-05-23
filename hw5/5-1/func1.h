#ifndef RANDOMFUNCTION_H
#define RANDOMFUNCTION_H

#include <string>

#include "func.h"

using namespace std;

class Function1 : public Function
{
public:
    int getIndex(string str);
};

#endif // RANDOMFUNCTION_H
