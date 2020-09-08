#include "rgb_serialqt.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RGB_SerialQt w;
    w.setWindowTitle("Arduino Nano RGB LED Controller");

    w.show();

    return a.exec();
}
