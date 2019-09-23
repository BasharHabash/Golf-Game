/****************************************************************************
** Meta object code from reading C++ file 'window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GolfApp/window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_window_t {
    QByteArrayData data[14];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_window_t qt_meta_stringdata_window = {
    {
QT_MOC_LITERAL(0, 0, 6), // "window"
QT_MOC_LITERAL(1, 7, 17), // "on_driver_pressed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "on_iron4_pressed"
QT_MOC_LITERAL(4, 43, 16), // "on_iron5_pressed"
QT_MOC_LITERAL(5, 60, 16), // "on_iron6_pressed"
QT_MOC_LITERAL(6, 77, 16), // "on_iron7_pressed"
QT_MOC_LITERAL(7, 94, 16), // "on_iron8_pressed"
QT_MOC_LITERAL(8, 111, 16), // "on_iron9_pressed"
QT_MOC_LITERAL(9, 128, 17), // "on_putter_pressed"
QT_MOC_LITERAL(10, 146, 24), // "on_powerBar_valueChanged"
QT_MOC_LITERAL(11, 171, 16), // "on_reset_pressed"
QT_MOC_LITERAL(12, 188, 13), // "openNewWindow"
QT_MOC_LITERAL(13, 202, 9) // "nextLevel"

    },
    "window\0on_driver_pressed\0\0on_iron4_pressed\0"
    "on_iron5_pressed\0on_iron6_pressed\0"
    "on_iron7_pressed\0on_iron8_pressed\0"
    "on_iron9_pressed\0on_putter_pressed\0"
    "on_powerBar_valueChanged\0on_reset_pressed\0"
    "openNewWindow\0nextLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        window *_t = static_cast<window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_driver_pressed(); break;
        case 1: _t->on_iron4_pressed(); break;
        case 2: _t->on_iron5_pressed(); break;
        case 3: _t->on_iron6_pressed(); break;
        case 4: _t->on_iron7_pressed(); break;
        case 5: _t->on_iron8_pressed(); break;
        case 6: _t->on_iron9_pressed(); break;
        case 7: _t->on_putter_pressed(); break;
        case 8: _t->on_powerBar_valueChanged(); break;
        case 9: _t->on_reset_pressed(); break;
        case 10: _t->openNewWindow(); break;
        case 11: _t->nextLevel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject window::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_window.data,
      qt_meta_data_window,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
