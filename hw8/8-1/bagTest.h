#pragma once
#include <QtCore/QObject>
#include <QtTest/QTest>
#include "bag.h"
#include <string>
#include <sstream>

class BagTest : public QObject
{
    Q_OBJECT
public:
    explicit BagTest(QObject *parent = 0): QObject(parent) {}
private slots:
    void cleanup()
    {
        mSet.clear();
    }
    void testEmpty()
    {
        QVERIFY(mSet.isEmpty());
    }
    void testInsertFindNumeric()
    {
        mSet.insert(34);
        mSet.insert(34);
        mSet.insert(45);
        mSet.insert(3);
        QVERIFY(mSet.find(34) && mSet.find(45) && !mSet.find(0));
    }
    void testEraseNumeric()
    {
        mSet.insert(a);
        mSet.insert(a);
        mSet.erase(a);
        mSet.insert(b);
        mSet.insert(b);
        mSet.eraseAll(b);
        QVERIFY(mSet.find(a) && !mSet.find(b));
    }
    void testQuantityNumeric()
    {   
        mSet.insert(a);
        mSet.insert(a);
        mSet.insert(a);
        mSet.insert(b);
        mSet.insert(b);

        QVERIFY((mSet.quantity(a) == 3) && (mSet.quantity(b) == 2));
    }

    void testClear()
    {
        mSet.insert(a);
        mSet.insert(a);
        mSet.insert(b);
        mSet.clear();
        QVERIFY(mSet.isEmpty());
    }
private:
    Bag<int> mSet;
    const static int a = 100;
    const static int b = 6;
};
