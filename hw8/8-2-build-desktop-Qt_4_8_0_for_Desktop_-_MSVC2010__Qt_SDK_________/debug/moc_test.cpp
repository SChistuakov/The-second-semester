/****************************************************************************
** Meta object code from reading C++ file 'test.h'
**
** Created: Thu 24. May 20:29:21 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../8-2/test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VectorTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      30,   11,   11,   11, 0x08,
      53,   11,   11,   11, 0x08,
      75,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,
     100,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VectorTest[] = {
    "VectorTest\0\0TestConstructor()\0"
    "TestConstructorArray()\0TestCopyConstructor()\0"
    "testAdd()\0testSubtract()\0testScalarMultiply()\0"
};

void VectorTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VectorTest *_t = static_cast<VectorTest *>(_o);
        switch (_id) {
        case 0: _t->TestConstructor(); break;
        case 1: _t->TestConstructorArray(); break;
        case 2: _t->TestCopyConstructor(); break;
        case 3: _t->testAdd(); break;
        case 4: _t->testSubtract(); break;
        case 5: _t->testScalarMultiply(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData VectorTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VectorTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VectorTest,
      qt_meta_data_VectorTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VectorTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VectorTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VectorTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VectorTest))
        return static_cast<void*>(const_cast< VectorTest*>(this));
    return QObject::qt_metacast(_clname);
}

int VectorTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
