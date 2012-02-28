/********************************************************************************
** Form generated from reading UI file 'mainlauncher.ui'
**
** Created: Tue Feb 28 18:11:08 2012
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
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
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *b_clearCache;
    QLabel *lblInfo;
    QCheckBox *cbOpenGL;
    QPushButton *b_play;
    QWebView *webView;

    void setupUi(QDialog *MainLauncher)
    {
        if (MainLauncher->objectName().isEmpty())
            MainLauncher->setObjectName(QString::fromUtf8("MainLauncher"));
        MainLauncher->setEnabled(true);
        MainLauncher->resize(550, 220);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainLauncher->sizePolicy().hasHeightForWidth());
        MainLauncher->setSizePolicy(sizePolicy);
        MainLauncher->setMinimumSize(QSize(550, 220));
        MainLauncher->setMaximumSize(QSize(550, 550));
        MainLauncher->setStyleSheet(QString::fromUtf8(""));
        MainLauncher->setSizeGripEnabled(false);
        verticalLayoutWidget = new QWidget(MainLauncher);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 551, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        b_clearCache = new QPushButton(verticalLayoutWidget);
        b_clearCache->setObjectName(QString::fromUtf8("b_clearCache"));
        b_clearCache->setMaximumSize(QSize(550, 16777215));

        horizontalLayout->addWidget(b_clearCache);

        lblInfo = new QLabel(verticalLayoutWidget);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblInfo->sizePolicy().hasHeightForWidth());
        lblInfo->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 125));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush3(QColor(0, 0, 0, 175));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush4(QColor(106, 104, 100, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        lblInfo->setPalette(palette);
        lblInfo->setAutoFillBackground(true);

        horizontalLayout->addWidget(lblInfo);

        cbOpenGL = new QCheckBox(verticalLayoutWidget);
        cbOpenGL->setObjectName(QString::fromUtf8("cbOpenGL"));
        sizePolicy.setHeightForWidth(cbOpenGL->sizePolicy().hasHeightForWidth());
        cbOpenGL->setSizePolicy(sizePolicy);
        cbOpenGL->setMaximumSize(QSize(550, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush5(QColor(0, 0, 127, 150));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        cbOpenGL->setPalette(palette1);
        cbOpenGL->setAutoFillBackground(true);

        horizontalLayout->addWidget(cbOpenGL);

        b_play = new QPushButton(verticalLayoutWidget);
        b_play->setObjectName(QString::fromUtf8("b_play"));
        b_play->setMaximumSize(QSize(550, 16777215));

        horizontalLayout->addWidget(b_play);


        verticalLayout->addLayout(horizontalLayout);

        webView = new QWebView(MainLauncher);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setGeometry(QRect(0, 0, 550, 220));
        webView->setMinimumSize(QSize(550, 220));
        webView->setMaximumSize(QSize(550, 550));
        webView->setMouseTracking(false);
        webView->setContextMenuPolicy(Qt::NoContextMenu);
        webView->setAcceptDrops(false);
        webView->setAutoFillBackground(false);
        webView->setUrl(QUrl(QString::fromUtf8("http://panel.hellground.pl/testowo/stats_hg.php")));
        webView->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget->raise();

        retranslateUi(MainLauncher);

        QMetaObject::connectSlotsByName(MainLauncher);
    } // setupUi

    void retranslateUi(QDialog *MainLauncher)
    {
        MainLauncher->setWindowTitle(QApplication::translate("MainLauncher", "Dialog", 0, QApplication::UnicodeUTF8));
        b_clearCache->setText(QApplication::translate("MainLauncher", "Clear Cache", 0, QApplication::UnicodeUTF8));
        lblInfo->setText(QApplication::translate("MainLauncher", "HellGround Launcher", 0, QApplication::UnicodeUTF8));
        cbOpenGL->setText(QApplication::translate("MainLauncher", "- opengl", 0, QApplication::UnicodeUTF8));
        b_play->setText(QApplication::translate("MainLauncher", "Play !", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainLauncher: public Ui_MainLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLAUNCHER_H
