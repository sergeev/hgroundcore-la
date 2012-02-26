/********************************************************************************
** Form generated from reading UI file 'mainlauncher.ui'
**
** Created: Sun Feb 26 21:49:10 2012
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
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_MainLauncher
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWebView *webView;
    QGridLayout *gridLayout;
    QPushButton *b_changelog;
    QPushButton *b_clearCache;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_play;
    QCheckBox *cbOpenGL;

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
        verticalLayoutWidget = new QWidget(MainLauncher);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 551, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        webView = new QWebView(verticalLayoutWidget);
        webView->setObjectName(QString::fromUtf8("webView"));
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
        webView->setUrl(QUrl(QString::fromUtf8("http://uploader.hellground.pl/")));

        verticalLayout->addWidget(webView);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        b_changelog = new QPushButton(verticalLayoutWidget);
        b_changelog->setObjectName(QString::fromUtf8("b_changelog"));

        gridLayout->addWidget(b_changelog, 1, 2, 1, 1);

        b_clearCache = new QPushButton(verticalLayoutWidget);
        b_clearCache->setObjectName(QString::fromUtf8("b_clearCache"));

        gridLayout->addWidget(b_clearCache, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        b_play = new QPushButton(verticalLayoutWidget);
        b_play->setObjectName(QString::fromUtf8("b_play"));

        gridLayout->addWidget(b_play, 0, 2, 1, 1);

        cbOpenGL = new QCheckBox(verticalLayoutWidget);
        cbOpenGL->setObjectName(QString::fromUtf8("cbOpenGL"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush9(QColor(0, 0, 0, 125));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush9);
        QBrush brush10(QColor(0, 0, 127, 150));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        QBrush brush11(QColor(106, 104, 100, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        cbOpenGL->setPalette(palette1);
        cbOpenGL->setAutoFillBackground(true);

        gridLayout->addWidget(cbOpenGL, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(b_play, cbOpenGL);
        QWidget::setTabOrder(cbOpenGL, b_changelog);
        QWidget::setTabOrder(b_changelog, b_clearCache);
        QWidget::setTabOrder(b_clearCache, webView);

        retranslateUi(MainLauncher);

        QMetaObject::connectSlotsByName(MainLauncher);
    } // setupUi

    void retranslateUi(QDialog *MainLauncher)
    {
        MainLauncher->setWindowTitle(QApplication::translate("MainLauncher", "Dialog", 0, QApplication::UnicodeUTF8));
        b_changelog->setText(QApplication::translate("MainLauncher", "[ changelog ]", 0, QApplication::UnicodeUTF8));
        b_clearCache->setText(QApplication::translate("MainLauncher", "Clear Cache", 0, QApplication::UnicodeUTF8));
        b_play->setText(QApplication::translate("MainLauncher", "Play !", 0, QApplication::UnicodeUTF8));
        cbOpenGL->setText(QApplication::translate("MainLauncher", "- opengl", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainLauncher: public Ui_MainLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLAUNCHER_H
