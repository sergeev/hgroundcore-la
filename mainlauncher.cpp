#include "mainlauncher.h"
#include "ui_mainlauncher.h"

#include <QProcess.h>

MainLauncher::MainLauncher(QWidget *parent)
    : QDialog(parent)
{
    pInterface = new Ui::MainLauncher();
    pInterface->setupUi(this);

    pAntiCheat = new AntiCheat();
    pAntiCheat->start();

    pChangeLog = new ChangeLog(this);
}

MainLauncher::~MainLauncher()
{
    // potrzebujemy tego ? nie uzywamy QThread::exec()
    if (pAntiCheat->isRunning())
        pAntiCheat->exit();

    delete pInterface;
    delete pAntiCheat;
    delete pChangeLog;
}

void MainLauncher::on_b_play_clicked()
{
    QStringList commands;
    commands << "";
    #ifndef WIN32
        commands << " -opengl";
    #endif

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

void MainLauncher::on_b_changelog_clicked()
{
    pChangeLog->show();
}

ChangeLog::ChangeLog(QWidget *parent)
{
    setWindowTitle("Changelog");
    setGeometry(QRect(50,50, 300, 400));
    setMinimumSize(QSize(250, 420));
    setMaximumSize(QSize(250, 430));

    pView = new QWebView(this);
    pView->setUrl(QUrl("http://localhost/~lukaasm/changelog.html"));
    pView->setMaximumSize(QSize(250, 800));
}

ChangeLog::~ChangeLog()
{
    delete pView;
}

void AntiCheat::run()
{
    while(true)
    {
        // sleep na 5s ;]
        usleep(5000);
    }
}
