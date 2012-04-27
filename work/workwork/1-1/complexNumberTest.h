#pragma once

#include <QtCore/QObject>
#include <QtTest/QTest>

#include "complexnumber.h"

class ComplexNumberTest : public QObject
{
  Q_OBJECT
public:
  explicit ComplexNumberTest(QObject *parent = 0) : QObject(parent) {}
private slots:

  void testMultiplication()
  {
      ComplexNumber a(7, 6);
      ComplexNumber b(5, 3);

      ComplexNumber c = a * b;
      QVERIFY(c.a == 17);
      QVERIFY(c.b == 51);
  }

  void testModule()
  {
      ComplexNumber a(3, 4);

      QVERIFY(a.module() == 5);
  }


};
