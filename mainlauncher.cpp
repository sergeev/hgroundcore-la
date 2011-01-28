#include "mainlauncher.h"
#include "ui_mainlauncher.h"

#include <qprocess.h>

MainLauncher::MainLauncher(QWidget *parent)
    : QDialog(parent), pUI(new Ui::MainLauncher), pChangelog(NULL)
{
    pUI->setupUi(this);

    pAC = new AntiCheat();
    pAC->start();
}

MainLauncher::~MainLauncher()
{
    if (pChangelog)
        delete pChangelog;

    if (pAC->isRunning())
        pAC->exit();

    delete pAC;
    delete pUI;
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
    if (!pChangelog)
       pChangelog = new ChangeLog(this);

    pChangelog->show();
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
    while(1)
    {
        usleep(5000);
    }
}
