#pragma once

#include <QtTest/QtTest>
#include "arraylist.h"
#include "linkedlist.h"
#include <sstream>
#include <iostream>

class ListTest : public QObject
{
    Q_OBJECT

protected slots:
    virtual void init() = 0;

    virtual void cleanup()
    {
        delete list;
    }

    virtual void testInsert()
    {
        list->add(4);
        list->add(7);
        list->add(9);
        QCOMPARE(list->exist(9));
    }

    virtual void testRemove()
    {
        list->add(88);
        QCOMPARE(list->exist(88));
        list->remove(88);
        QCOMPARE(!list->exist(88));
    }

protected:
    List* list;
};

class ArrayListTest: public ListTest
{
    Q_OBJECT
private slots:
    void init()
    {
        list = new ArrayList();
    }

    void cleanup()
    { ListTest::cleanup(); }
    void testInsert()
    { ListTest::testInsert(); }
    void testRemove()
    { ListTest::testRemove(); }
};

class LinkedListTest: public ListTest
{
    Q_OBJECT
private slots:
    void init()
    {
        list = new LinkedList();
    }
    void cleanup()
    { ListTest::cleanup(); }
    void testInsert()
    { ListTest::testInsert(); }
    void testRemove()
    { ListTest::testRemove(); }
};
