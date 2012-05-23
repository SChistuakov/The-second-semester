/****************************************************************************
** Meta object code from reading C++ file 'qsorttest.h'
**
** Created: Wed 23. May 23:23:48 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../3-3/qsorttest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsorttest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSortTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      18,   10,   10,   10, 0x08,
      28,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QSortTest[] = {
    "QSortTest\0\0init()\0cleanup()\0testQuickSort()\0"
};

void QSortTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSortTest *_t = static_cast<QSortTest *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->testQuickSort(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QSortTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSortTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSortTest,
      qt_meta_data_QSortTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSortTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSortTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSortTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSortTest))
        return static_cast<void*>(const_cast< QSortTest*>(this));
    return QObject::qt_metacast(_clname);
}

int QSortTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
