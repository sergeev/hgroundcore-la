#ifndef MAINLAUNCHER_H
#define MAINLAUNCHER_H

#include <QDialog>
#include <QWebView>
#include <QThread>
#include <QFrame>

#define HG_LAUNCHER_INDEX QUrl("http://panel.gamefreedom.pl/testowo/stats_hg.php")
#define HG_INDEX_INTERVAL 60000

namespace Ui
{
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

public:
    explicit AntiCheat();
    ~AntiCheat();

protected:
    void run();

private:
    bool bDone;
};

class MainLauncher : public QDialog
{
    Q_OBJECT

public:
    explicit MainLauncher(QWidget *parent = 0);
    ~MainLauncher();

protected:
    void timerEvent (QTimerEvent * event);

private:
    Ui::MainLauncher *pInterface;

    ChangeLog *pChangeLog;
    AntiCheat *pAntiCheat;

    QFrame *pBackground;

private slots:
    void on_webView_urlChanged(QUrl);
    void on_webView_loadFinished(bool);

    void on_b_changelog_clicked();
    void on_b_play_clicked();
};

#endif // MAINLAUNCHER_H
