#pragma once
#include <QtCore/QtCore>
#include <QtTest/QtTest>
#include "vector.h"
#include "sstream"

class VectorTest:public QObject
{
    Q_OBJECT

public:
    explicit VectorTest(QObject *parent = 0):QObject(parent){}

private slots:
    void TestConstructor()
    {
        Vector<int, 3> v;
        std::string str = "<0, 0, 0, 0, 0>\n";
        QCOMPARE(v.print(), str);
    }

   void TestConstructorArray()
    {
        int a[5] = {1, 2, 3, 4, 5};
        std::string str = "<1, 2, 3, 4, 5>\n";
        Vector<int, 5> v(a, 5);
        QCOMPARE(v.print(), str);
    }

    void TestCopyConstructor()
    {
        int a[5] = {1, 2, 3, 4, 5};
        std::string str = "<1, 2, 3, 4, 5>\n";
        Vector<int, 5> v(a, 5);
        Vector<int, 5> v1(v);
        QCOMPARE(v1.print(), str);
    }
    void testAddition()
        {
            int a1[10];
            int a2[10];
            for (int i = 0; i < 10; i++)
            {
                a1[i] = i;
                a2[i] = 10 - i;
            }
            Vector<int, 10> v(a1, 10);
            Vector<int, 10> v1(a2, 10);
            Vector<int, 10> v2 = v.addition(v1);
            std::string str = "<10, 10, 10, 10, 10, 10, 10, 10, 10, 10>\n";
            QCOMPARE(v2.print(), str);
        }

        void testSubtract()
        {
            int ar1[10];
            int ar2[10];
            for (int i = 0; i < 10; i++)
            {
                ar1[i] = i;
                ar2[i] = 20 + i;
            }
            Vector<int, 10> v(ar1, 10);
            Vector<int, 10> v1(ar2, 10);
            Vector<int, 10> v2 = v1.subtract(v);
            std::string str = "<20, 20, 20, 20, 20, 20, 20, 20, 20, 20>\n";
            QCOMPARE(v2.print(), str);
        }

        void testScalarMultiply()
        {
            const int v1[] = { 3, 1, -2};
            const int v2[] = { -13, 21, 7};
            Vector<int, 3> v(v1, 3);
            Vector<int, 3> u(v2, 3);
            QCOMPARE(v.scalarMultiply(u), -32);
        }
};

QTEST_MAIN(VectorTest)

