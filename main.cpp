#include <QApplication>
#include <QtWidgets>
#include "mainwindow.h"
#include <qtwebenginewidgetsglobal.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    QUrl url;
    if (argc > 1)
        url = QUrl::fromUserInput(argv[1]);
    else
        url = QUrl("https://www.amazon.com/gp/product/B014R5XIDY");
    MainWindow *browser = new MainWindow(url);
    browser->show();

    return a.exec();
}
