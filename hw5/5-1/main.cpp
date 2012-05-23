#include <iostream>
#include <string>

#include "hashTest.h"

using namespace std;

int main()
{
    HashTest test;
    QTest::qExec(&test);

    return 0;
}

