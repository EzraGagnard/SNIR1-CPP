/****************************************************************************
** Meta object code from reading C++ file 'banque.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BanqueQt/banque.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'banque.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Banque_t {
    QByteArrayData data[9];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Banque_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Banque_t qt_meta_stringdata_Banque = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Banque"
QT_MOC_LITERAL(1, 7, 28), // "on_pushButtonDeposer_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 28), // "on_pushButtonRetirer_clicked"
QT_MOC_LITERAL(4, 66, 37), // "on_pushButtonChangerDecouvert..."
QT_MOC_LITERAL(5, 104, 35), // "on_pushButtonDeposerEpargne_c..."
QT_MOC_LITERAL(6, 140, 35), // "on_pushButtonRetirerEpargne_c..."
QT_MOC_LITERAL(7, 176, 27), // "on_pushButtonNvTaux_clicked"
QT_MOC_LITERAL(8, 204, 36) // "on_pushButtonCrediterInteret_..."

    },
    "Banque\0on_pushButtonDeposer_clicked\0"
    "\0on_pushButtonRetirer_clicked\0"
    "on_pushButtonChangerDecouvert_clicked\0"
    "on_pushButtonDeposerEpargne_clicked\0"
    "on_pushButtonRetirerEpargne_clicked\0"
    "on_pushButtonNvTaux_clicked\0"
    "on_pushButtonCrediterInteret_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Banque[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Banque::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Banque *_t = static_cast<Banque *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonDeposer_clicked(); break;
        case 1: _t->on_pushButtonRetirer_clicked(); break;
        case 2: _t->on_pushButtonChangerDecouvert_clicked(); break;
        case 3: _t->on_pushButtonDeposerEpargne_clicked(); break;
        case 4: _t->on_pushButtonRetirerEpargne_clicked(); break;
        case 5: _t->on_pushButtonNvTaux_clicked(); break;
        case 6: _t->on_pushButtonCrediterInteret_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Banque::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Banque.data,
      qt_meta_data_Banque,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Banque::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Banque::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Banque.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Banque::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
