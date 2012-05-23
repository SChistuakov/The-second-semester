#include <iostream>
#include "bagTest.h"
using namespace std;

int main()
{
    BagTest t1;
    QTest::qExec(&t1);
    return 0;
}

