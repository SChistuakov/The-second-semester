#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QSignalMapper>
#include <QString>
#include <QFrame>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
     QPushButton *buttons[9];
     QSignalMapper *numMap;
     /// current player
     int player;
     int table[3][3];
     void init();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     /// check current player if he win
     bool globalCheck(int i);
     bool lineCheck(int x);
     bool columnCheck(int y);
     bool diagonalCheck();
    
private:
    Ui::MainWindow *ui;

public slots:
    void ifClick(int i);
    void restart();
};

#endif // MAINWINDOW_H
