#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Counterapp window;

    window.setGeometry(200, 200, 500, 500);
    window.setWindowTitle("Counter of Clicks");

    window.show();

    return app.exec();
}
