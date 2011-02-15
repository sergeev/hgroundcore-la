/****************************************************************************
** Meta object code from reading C++ file 'mainlauncher.h'
**
** Created: Tue Feb 15 22:58:46 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainlauncher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainlauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChangeLog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ChangeLog[] = {
    "ChangeLog\0"
};

const QMetaObject ChangeLog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangeLog,
      qt_meta_data_ChangeLog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChangeLog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChangeLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChangeLog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeLog))
        return static_cast<void*>(const_cast< ChangeLog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChangeLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_AntiCheat[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_AntiCheat[] = {
    "AntiCheat\0"
};

const QMetaObject AntiCheat::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_AntiCheat,
      qt_meta_data_AntiCheat, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AntiCheat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AntiCheat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AntiCheat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AntiCheat))
        return static_cast<void*>(const_cast< AntiCheat*>(this));
    return QThread::qt_metacast(_clname);
}

int AntiCheat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_MainLauncher[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      42,   13,   13,   13, 0x08,
      72,   13,   13,   13, 0x08,
      97,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainLauncher[] = {
    "MainLauncher\0\0on_webView_urlChanged(QUrl)\0"
    "on_webView_loadFinished(bool)\0"
    "on_b_changelog_clicked()\0on_b_play_clicked()\0"
};

const QMetaObject MainLauncher::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainLauncher,
      qt_meta_data_MainLauncher, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainLauncher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainLauncher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainLauncher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainLauncher))
        return static_cast<void*>(const_cast< MainLauncher*>(this));
    return QDialog::qt_metacast(_clname);
}

int MainLauncher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_webView_urlChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: on_webView_loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: on_b_changelog_clicked(); break;
        case 3: on_b_play_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
