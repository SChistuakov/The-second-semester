/****************************************************************************
** Meta object code from reading C++ file 'pairTest.h'
**
** Created: Fri 27. Apr 10:46:36 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../1-1/pairTest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pairTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PairTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      27,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PairTest[] = {
    "PairTest\0\0testPlus_Minus()\0"
    "testMultiplication()\0"
};

void PairTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PairTest *_t = static_cast<PairTest *>(_o);
        switch (_id) {
        case 0: _t->testPlus_Minus(); break;
        case 1: _t->testMultiplication(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PairTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PairTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PairTest,
      qt_meta_data_PairTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PairTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PairTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PairTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PairTest))
        return static_cast<void*>(const_cast< PairTest*>(this));
    return QObject::qt_metacast(_clname);
}

int PairTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
