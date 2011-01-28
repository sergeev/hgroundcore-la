#ifndef MAINLAUNCHER_H
#define MAINLAUNCHER_H

#include <QDialog>
#include <QWebView>
#include <QThread>

namespace Ui {
    class MainLauncher;
}

class AntiCheat;

class MainLauncher : public QDialog
{
    Q_OBJECT

public:
    explicit MainLauncher(QWidget *parent = 0);
    ~MainLauncher();

private:
    Ui::MainLauncher *pUI;

    QDialog *pChangelog;
    AntiCheat *pAC;

private slots:
    void on_b_changelog_clicked();
    void on_b_play_clicked();
};

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
    bool scanProcess(){ return false; }
    void run();
};

#endif // MAINLAUNCHER_H
