#include "denerahummel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DeneraHummel w;
    w.show();

    return a.exec();
}
