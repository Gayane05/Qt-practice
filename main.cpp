#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSpinBox spb;

    QPalette pal = spb.palette();

    pal.setBrush(QPalette::Button, QBrush(Qt::black, Qt::Dense3Pattern));
    pal.setColor(QPalette::ButtonText, Qt::blue);
    pal.setColor(QPalette::Text, Qt::black);
    pal.setColor(QPalette::Active, QPalette::Base, Qt::gray);

    spb.setPalette(pal);
    spb.resize(150, 100);
    spb.show();

    a.setStyle("Windows");

    return a.exec();
}
