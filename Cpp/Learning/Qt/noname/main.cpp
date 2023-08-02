#include "window.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Window window;

    window.show();
    return a.exec();
}
