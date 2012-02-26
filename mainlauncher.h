#ifndef MAINLAUNCHER_H
#define MAINLAUNCHER_H

#include <QDialog>
#include <QWebView>
#include <QThread>
#include <QFrame>

#define HG_LAUNCHER_INDEX QUrl("http://panel.hellground.pl/testowo/stats_hg.php")
#define HG_INDEX_INTERVAL 60000

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
    void on_webView_urlChanged(QUrl);
    void on_webView_loadFinished(bool);

    void on_b_play_clicked();
    void on_b_clearCache_clicked();
    void on_webView_linkClicked(const QUrl &arg1);
};

#endif // MAINLAUNCHER_H
