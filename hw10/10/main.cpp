#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setStyleSheet("background: white");
    w.setFixedSize(150,184);
    // ... ... <- ��� �������� ������� ��������� ������ ���
    // pal.setColor(QPalette::WindowText, Qt::red);
    w.show();
    return a.exec();
}
