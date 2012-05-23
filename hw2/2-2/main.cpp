#include <iostream>

#include "calculator.h"
#include "arraystackTest.h"
#include "pointstackTest.h"

using namespace std;

int main()
{
    ArrayStackTest t1;
    PointStackTest t2;
    QTest::qExec(&t1);
    QTest::qExec(&t2);
    return 0;
}

