#include <QtCore/QCoreApplication>
#include "FilePrinter.h"
#include "ConsolePrinter.h"
#include "FilePrinterTest.h"

int main()
{
    FilePrinterTest test;
    QTest::qExec(&test);
    cout << endl;
}

