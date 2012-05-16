/****************************************************************************
** Meta object code from reading C++ file 'FilePrinterTest.h'
**
** Created: Wed 16. May 12:24:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../3-2/FilePrinterTest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilePrinterTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FilePrinterTest[] = {

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
      17,   16,   16,   16, 0x08,
      24,   16,   16,   16, 0x08,
      34,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FilePrinterTest[] = {
    "FilePrinterTest\0\0init()\0cleanup()\0"
    "TestFilePrinter()\0"
};

void FilePrinterTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilePrinterTest *_t = static_cast<FilePrinterTest *>(_o);
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cleanup(); break;
        case 2: _t->TestFilePrinter(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData FilePrinterTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilePrinterTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FilePrinterTest,
      qt_meta_data_FilePrinterTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilePrinterTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilePrinterTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilePrinterTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilePrinterTest))
        return static_cast<void*>(const_cast< FilePrinterTest*>(this));
    return QObject::qt_metacast(_clname);
}

int FilePrinterTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
