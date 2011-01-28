#include <QtGui/QApplication>
#include "mainlauncher.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainLauncher mainFrame;
    mainFrame.show();

    return a.exec();
}
