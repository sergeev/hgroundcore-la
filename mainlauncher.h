#ifndef MAINLAUNCHER_H
#define MAINLAUNCHER_H

#include <QDialog>
#include <QWebView>
#include <QThread>

namespace Ui {
    class MainLauncher;
}

class ChangeLog: public QDialog
{
    Q_OBJECT

public:
    explicit ChangeLog(QWidget *parent = 0);
    ~ChangeLog();

private:
    QWebView *pView;
};

class AntiCheat : public QThread
{
    Q_OBJECT

protected:
    void run();
};

class MainLauncher : public QDialog
{
    Q_OBJECT

public:
    explicit MainLauncher(QWidget *parent = 0);
    ~MainLauncher();

private:
    Ui::MainLauncher *pInterface;

    ChangeLog *pChangeLog;
    AntiCheat *pAntiCheat;

private slots:
    void on_b_changelog_clicked();
    void on_b_play_clicked();
};

#endif // MAINLAUNCHER_H
