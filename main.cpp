#include "Code.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Code w;
    w.show();
    return a.exec();
}
