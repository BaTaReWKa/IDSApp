#include "idsapp.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IDSapp w;
    w.show();
    return a.exec();
}
