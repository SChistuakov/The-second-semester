#include <iostream>

using namespace std;

#include "pairTest.h"
#include "complexNumberTest.h"

int main()
{

    PairTest t1;
    ComplexNumberTest t2;
    QTest::qExec(&t1);
    QTest::qExec(&t2);

    return 0;
}

