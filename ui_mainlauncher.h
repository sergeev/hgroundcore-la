/********************************************************************************
** Form generated from reading UI file 'mainlauncher.ui'
**
** Created: Thu 3. Feb 19:57:16 2011
**      by: Qt User Interface Compiler version 4.7.0
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

    void setupUi(QDialog *MainLauncher)
    {
        if (MainLauncher->objectName().isEmpty())
            MainLauncher->setObjectName(QString::fromUtf8("MainLauncher"));
        MainLauncher->resize(550, 220);
        MainLauncher->setMinimumSize(QSize(550, 220));
        MainLauncher->setMaximumSize(QSize(550, 220));
        MainLauncher->setStyleSheet(QString::fromUtf8(""));
        MainLauncher->setSizeGripEnabled(false);
        webView = new QWebView(MainLauncher);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(0, 0, 550, 220));
        webView->setUrl(QUrl("http://panel.gamefreedom.pl/testowo/stats_hg.php"));
        b_play = new QPushButton(MainLauncher);
        b_play->setObjectName(QString::fromUtf8("b_play"));
        b_play->setGeometry(QRect(410, 130, 111, 51));
        b_changelog = new QPushButton(MainLauncher);
        b_changelog->setObjectName(QString::fromUtf8("b_changelog"));
        b_changelog->setGeometry(QRect(410, 181, 111, 20));

        retranslateUi(MainLauncher);

        QMetaObject::connectSlotsByName(MainLauncher);
    } // setupUi

    void retranslateUi(QDialog *MainLauncher)
    {
        MainLauncher->setWindowTitle(QApplication::translate("MainLauncher", "Dialog", 0, QApplication::UnicodeUTF8));
        b_play->setText(QApplication::translate("MainLauncher", "Play !", 0, QApplication::UnicodeUTF8));
        b_changelog->setText(QApplication::translate("MainLauncher", "[ changelog ]", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainLauncher: public Ui_MainLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLAUNCHER_H
