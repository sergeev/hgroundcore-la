#ifndef MAINLAUNCHER_H
#define MAINLAUNCHER_H

#include <QDialog>

namespace Ui {
    class MainLauncher;
}

class MainLauncher : public QDialog
{
    Q_OBJECT

public:
    explicit MainLauncher(QWidget *parent = 0);
    ~MainLauncher();

private:
    Ui::MainLauncher *ui;

    QDialog *pChangelog;

private slots:
    void on_b_changelog_clicked();
    void on_b_play_clicked();
};

#endif // MAINLAUNCHER_H
