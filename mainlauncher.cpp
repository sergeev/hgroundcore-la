#include "mainlauncher.h"
#include "ui_mainlauncher.h"

#include <QProcess>
#include <QLabel>
#include <QTimerEvent>
#include <QDir>
#include <QResizeEvent>
#include <QWebFrame>

MainLauncher::MainLauncher(QWidget *parent)
    : QDialog(parent)
{
    pBackground = new QFrame(this);
    pBackground->setMinimumSize(550, 220);
    pBackground->setStyleSheet("background-image: url(:/background.jpg);");

    pInterface = new Ui::MainLauncher();
    pInterface->setupUi(this);

    this->startTimer(HG_INDEX_INTERVAL);
}

MainLauncher::~MainLauncher()
{
    delete pBackground;
    delete pInterface;
}

void MainLauncher::timerEvent(QTimerEvent*)
{
    pInterface->webView->reload();
}

void MainLauncher::resizeEvent(QResizeEvent * event)
{
    pBackground->resize(event->size());
    pInterface->verticalLayoutWidget->resize(event->size());
}

void MainLauncher::on_b_play_clicked()
{
    QStringList commands;
    commands << "";

    if (pInterface->cbOpenGL->isChecked())
        commands << " -opengl";

    QProcess *wowApp = new QProcess(this);

    wowApp->start("wow.exe", commands);

    if (!wowApp->waitForFinished())
    {
        QDialog *err = new QDialog(this);

        QLabel *errortxt = new QLabel(err);
        errortxt->setText(wowApp->errorString());

        err->show();
    }
}

void MainLauncher::on_b_clearCache_clicked()
{
    QDir currentDir = QDir::current();  // get app directory
    if (currentDir.exists("Wow.exe"))   // check if it's WoW directory
        if (currentDir.cd("Cache"))     // change directory to Cache to have absolute path
            currentDir.rmpath(currentDir.absolutePath());
}

void MainLauncher::on_webView_urlChanged(QUrl newUrl)
{
    if (newUrl != HG_LAUNCHER_INDEX)
        on_webView_loadFinished(false);
}

void MainLauncher::on_webView_loadFinished(bool bSuccess)
{
    if (!bSuccess)
    {
        pInterface->webView->hide();
        pBackground->show();
    }
    else
    {
        QSize tmpSize = pInterface->webView->page()->mainFrame()->contentsSize();
        if (tmpSize.height() > pInterface->webView->minimumHeight())
            resize(tmpSize + pInterface->b_play->size());   // resize window to new content size + size for buttons
    }
}

void MainLauncher::on_webView_linkClicked(const QUrl &/*arg1*/)
{

}
