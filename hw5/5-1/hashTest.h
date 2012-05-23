#ifndef STRINGHASHTEST_H
#define STRINGHASHTEST_H

#include <QtCore/QObject>
#include <QtTest/QTest>

#include "hash.h"
#include "func1.h"

class HashTest : public QObject
{
  Q_OBJECT
public:
  explicit HashTest(QObject *parent = 0) : QObject(parent) {}
private slots:
  void init()
  {
      hash = new Hash();
      hash->setFunc(&f);
  }

  void cleanup()
  {
      delete hash;
  }

  void testAdd()
  {
      hash->add("My name is Sergey");
      QVERIFY(hash->exist("My name is Sergey"));

  }
  void testRemove()
  {
      hash->add("books");
      hash->remove("computer");
      hash->remove("books");
      QVERIFY(hash->exist("books") == 0);
  }


private:
  Hash *hash;
  Function1 f;

};

#endif // STRINGHASHTEST_H
