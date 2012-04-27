#pragma once

#include <QtCore/QObject>
#include <QtTest/QTest>

#include "pair.h"

class PairTest : public QObject
{
  Q_OBJECT
public:
  explicit PairTest(QObject *parent = 0) : QObject(parent) {}
private slots:

  void testPlus_Minus()
  {
      Pair a(7, 6);
      Pair b(5, 3);

      Pair c = a + b;
      QVERIFY(c.a == 12);
      QVERIFY(c.b == 9);

      c = a - b;
      QVERIFY(c.a == 2);
      QVERIFY(c.b == 3);
  }

  void testMultiplication()
  {
      Pair a(7, 6);
      Pair b = a * 3;

      QVERIFY(b.a == 21);
      QVERIFY(b.b == 18);
  }


};
