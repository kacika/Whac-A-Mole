/****************************************************************************
** Meta object code from reading C++ file 'mouse.h'
**
** Created: Sun Jun 27 17:11:52 2021
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mouse.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mouse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Mouse[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      19,    6,    6,    6, 0x08,
      31,    6,    6,    6, 0x08,
      45,    6,    6,    6, 0x08,
      72,    6,    6,    6, 0x08,
     109,  103,    6,    6, 0x08,
     127,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Mouse[] = {
    "Mouse\0\0gameStart()\0gamePause()\0"
    "iconChanged()\0setScore(QAbstractButton*)\0"
    "mouseRelease(QAbstractButton*)\0index\0"
    "levelChanged(int)\0Ranking()\0"
};

const QMetaObject Mouse::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Mouse,
      qt_meta_data_Mouse, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Mouse::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Mouse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Mouse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mouse))
        return static_cast<void*>(const_cast< Mouse*>(this));
    if (!strcmp(_clname, "Ui::mouse"))
        return static_cast< Ui::mouse*>(const_cast< Mouse*>(this));
    return QWidget::qt_metacast(_clname);
}

int Mouse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: gameStart(); break;
        case 1: gamePause(); break;
        case 2: iconChanged(); break;
        case 3: setScore((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 4: mouseRelease((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: levelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: Ranking(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
