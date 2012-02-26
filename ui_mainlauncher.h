/********************************************************************************
** Form generated from reading UI file 'mainlauncher.ui'
**
** Created: Mon Feb 27 00:12:56 2012
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
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbOpenGL;
    QPushButton *b_play;
    QPushButton *b_clearCache;

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
        verticalLayoutWidget->setGeometry(QRect(0, 0, 551, 579));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        webView = new QWebView(verticalLayoutWidget);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(webView->sizePolicy().hasHeightForWidth());
        webView->setSizePolicy(sizePolicy1);
        webView->setMaximumSize(QSize(550, 550));
        webView->setMouseTracking(false);
        webView->setContextMenuPolicy(Qt::NoContextMenu);
        webView->setAcceptDrops(false);
        webView->setAutoFillBackground(false);
        webView->setUrl(QUrl(QString::fromUtf8("http://panel.hellground.pl/testowo/stats_hg.php")));

        verticalLayout->addWidget(webView);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        cbOpenGL = new QCheckBox(verticalLayoutWidget);
        cbOpenGL->setObjectName(QString::fromUtf8("cbOpenGL"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 125));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(0, 0, 127, 150));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush3(QColor(106, 104, 100, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        cbOpenGL->setPalette(palette);
        cbOpenGL->setAutoFillBackground(true);

        gridLayout->addWidget(cbOpenGL, 2, 2, 1, 1);

        b_play = new QPushButton(verticalLayoutWidget);
        b_play->setObjectName(QString::fromUtf8("b_play"));

        gridLayout->addWidget(b_play, 2, 3, 1, 1);

        b_clearCache = new QPushButton(verticalLayoutWidget);
        b_clearCache->setObjectName(QString::fromUtf8("b_clearCache"));

        gridLayout->addWidget(b_clearCache, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(MainLauncher);

        QMetaObject::connectSlotsByName(MainLauncher);
    } // setupUi

    void retranslateUi(QDialog *MainLauncher)
    {
        MainLauncher->setWindowTitle(QApplication::translate("MainLauncher", "Dialog", 0, QApplication::UnicodeUTF8));
        cbOpenGL->setText(QApplication::translate("MainLauncher", "- opengl", 0, QApplication::UnicodeUTF8));
        b_play->setText(QApplication::translate("MainLauncher", "Play !", 0, QApplication::UnicodeUTF8));
        b_clearCache->setText(QApplication::translate("MainLauncher", "Clear Cache", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainLauncher: public Ui_MainLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLAUNCHER_H
