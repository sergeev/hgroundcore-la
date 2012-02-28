#ifndef MAINLAUNCHER_H
#define MAINLAUNCHER_H

#include <QDialog>
#include <QWebView>
#include <QThread>
#include <QFrame>

#define HG_LAUNCHER_INDEX QUrl("http://panel.hellground.pl/testowo/stats_hg.php")
#define HG_INDEX_INTERVAL 60000

#define WOW_EXE_NAME    "Wow.exe"

#ifdef WIN32
#define WOW_PROCESS     WOW_EXE_NAME
#else
#define WOW_PROCESS     "wine"
#endif

namespace Ui
{
    class MainLauncher;
}

class MainLauncher : public QDialog
{
    Q_OBJECT

public:
    explicit MainLauncher(QWidget *parent = 0);
    ~MainLauncher();

protected:
    void timerEvent (QTimerEvent * event);
    void resizeEvent (QResizeEvent * event);

private:
    Ui::MainLauncher *pInterface;
    QFrame *pBackground;

private slots:
    void on_webView_urlChanged(const QUrl &newUrl);
    void on_webView_loadFinished(bool);

    void on_b_play_clicked();
    void on_b_clearCache_clicked();
};

#endif // MAINLAUNCHER_H
