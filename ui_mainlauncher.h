/********************************************************************************
** Form generated from reading UI file 'mainlauncher.ui'
**
** Created: Sun Feb 26 19:22:25 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINLAUNCHER_H
#define UI_MAINLAUNCHER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_MainLauncher
{
public:
    QWebView *webView;
    QPushButton *b_play;
    QPushButton *b_changelog;
    QPushButton *b_clearCache;

    void setupUi(QDialog *MainLauncher)
    {
        if (MainLauncher->objectName().isEmpty())
            MainLauncher->setObjectName(QString::fromUtf8("MainLauncher"));
        MainLauncher->setEnabled(true);
        MainLauncher->resize(550, 220);
        MainLauncher->setMinimumSize(QSize(550, 220));
        MainLauncher->setMaximumSize(QSize(550, 550));
        MainLauncher->setStyleSheet(QString::fromUtf8(""));
        MainLauncher->setSizeGripEnabled(false);
        webView = new QWebView(MainLauncher);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(0, 0, 550, 221));
        webView->setMaximumSize(QSize(550, 550));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(212, 208, 200, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 0));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(233, 231, 227, 0));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(106, 104, 100, 0));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(141, 139, 133, 0));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(233, 231, 227, 127));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        webView->setPalette(palette);
        webView->setMouseTracking(false);
        webView->setContextMenuPolicy(Qt::NoContextMenu);
        webView->setAcceptDrops(false);
        webView->setAutoFillBackground(false);
        webView->setUrl(QUrl(QString::fromUtf8("http://panel.hellground.pl/testowo/stats_hg.php")));
        b_play = new QPushButton(MainLauncher);
        b_play->setObjectName(QString::fromUtf8("b_play"));
        b_play->setGeometry(QRect(440, 150, 101, 31));
        b_changelog = new QPushButton(MainLauncher);
        b_changelog->setObjectName(QString::fromUtf8("b_changelog"));
        b_changelog->setGeometry(QRect(440, 190, 101, 21));
        b_clearCache = new QPushButton(MainLauncher);
        b_clearCache->setObjectName(QString::fromUtf8("b_clearCache"));
        b_clearCache->setGeometry(QRect(350, 190, 81, 21));

        retranslateUi(MainLauncher);

        QMetaObject::connectSlotsByName(MainLauncher);
    } // setupUi

    void retranslateUi(QDialog *MainLauncher)
    {
        MainLauncher->setWindowTitle(QApplication::translate("MainLauncher", "Dialog", 0, QApplication::UnicodeUTF8));
        b_play->setText(QApplication::translate("MainLauncher", "Play !", 0, QApplication::UnicodeUTF8));
        b_changelog->setText(QApplication::translate("MainLauncher", "[ changelog ]", 0, QApplication::UnicodeUTF8));
        b_clearCache->setText(QApplication::translate("MainLauncher", "Clear Cache", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainLauncher: public Ui_MainLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLAUNCHER_H
