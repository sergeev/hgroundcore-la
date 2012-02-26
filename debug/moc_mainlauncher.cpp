/****************************************************************************
** Meta object code from reading C++ file 'mainlauncher.h'
**
** Created: Sun Feb 26 20:08:11 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainlauncher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainlauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChangeLog[] = {

 // content:
       6,       // revision
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

void ChangeLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ChangeLog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChangeLog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangeLog,
      qt_meta_data_ChangeLog, &staticMetaObjectExtraData }
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
       6,       // revision
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

void AntiCheat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AntiCheat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AntiCheat::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_AntiCheat,
      qt_meta_data_AntiCheat, &staticMetaObjectExtraData }
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
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
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
     117,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainLauncher[] = {
    "MainLauncher\0\0on_webView_urlChanged(QUrl)\0"
    "on_webView_loadFinished(bool)\0"
    "on_b_changelog_clicked()\0on_b_play_clicked()\0"
    "on_b_clearCache_clicked()\0"
};

void MainLauncher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainLauncher *_t = static_cast<MainLauncher *>(_o);
        switch (_id) {
        case 0: _t->on_webView_urlChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->on_webView_loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_b_changelog_clicked(); break;
        case 3: _t->on_b_play_clicked(); break;
        case 4: _t->on_b_clearCache_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainLauncher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainLauncher::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MainLauncher,
      qt_meta_data_MainLauncher, &staticMetaObjectExtraData }
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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
