#pragma once

#include <QtCore/QtCore>
#include <QtTest/QtTest>
#include "UList.h"
#include <QObject>

class UListTest : public QObject
{
    Q_OBJECT
public:
    explicit UListTest(QObject *parent = 0):QObject(parent){}

private slots:

    void init()
    {
        list = new UList;
    }

    void testAdd()
    {
        list->add(14);
        QVERIFY (list->exist(14));
    }

    void testWrongAdd()
    {
        bool catched = false;
        list->add(14);
        try
        {
            list->add(14);
        }
        catch (UList::WrongAdd)
        {
            catched = true;
        }
        QVERIFY(catched);
    }

    void testRemove()
    {
        list->add(3);
        list->remove(3);
        QVERIFY (!list->exist(3));
    }

    void testWrongRemove()
    {
        bool catched = false;
        try
        {
            list->remove(14);
        }
        catch (UList::WrongRemove)
        {
            catched = true;
        }
        QVERIFY(catched);
    }

    void cleanup()
    {
        delete list;
    }

private:
    UList *list;

};
