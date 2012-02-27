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

#ifndef WIN32
    pInterface->cbOpenGL->setChecked(true);
#endif

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

#ifndef WIN32
    commands << WOW_EXE_NAME;
#endif

    if (pInterface->cbOpenGL->isChecked())
        commands << "-opengl";

    QProcess wowApp(this);
    QString tmpInfo;

    if (!QDir::current().exists(WOW_EXE_NAME))
        tmpInfo = "Error: wrong directory";
    else if (!wowApp.startDetached(WOW_PROCESS, commands))
        tmpInfo = "Error: " + wowApp.errorString();
    else
        tmpInfo = "WoW runned successfully";

    pInterface->lblInfo->setText(tmpInfo);
}

void MainLauncher::on_b_clearCache_clicked()
{
    QDir currentDir = QDir::current();  // get app directory
    QString tmpInfo = "";

    if (currentDir.exists(WOW_EXE_NAME))   // check if it's WoW directory
    {
        if (currentDir.cd("Cache"))     // change directory to Cache to have absolute path
        {
            currentDir.rmpath(currentDir.absolutePath());
            tmpInfo = "Cache cleaned";
        }
        else
            tmpInfo = "Cache already cleaned";
    }
    else
        tmpInfo = "Wrong directory";

    pInterface->lblInfo->setText(tmpInfo);
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
