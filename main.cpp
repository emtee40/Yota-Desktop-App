#include "yota.h"
#include <QApplication>
#define P_VERSION "1.0.0"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Yota w;
    w.show();

    return a.exec();
}
