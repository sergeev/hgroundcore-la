#include "mainlauncher.h"
#include "ui_mainlauncher.h"

#include <qprocess.h>

MainLauncher::MainLauncher(QWidget *parent)
    : QDialog(parent), ui(new Ui::MainLauncher), pChangelog(NULL)
{
    ui->setupUi(this);
}

MainLauncher::~MainLauncher()
{
    delete ui;
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
    {
        pChangelog = new QDialog(this);
        pChangelog->setWindowTitle("Changelog");
        pChangelog->setGeometry(QRect(50,50, 300, 400));
        pChangelog->setMinimumSize(QSize(250, 420));
        pChangelog->setMaximumSize(QSize(250, 430));

        QWebView *cView = new QWebView(pChangelog);
        cView->setUrl(QUrl("http://localhost/~lukaasm/changelog.html"));
        cView->setMaximumSize(QSize(250, 800));

        // scrollbar itp, tego brakuje :} DO DOPRACOWANIA

    }

    pChangelog->show();
}
