#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::init()
{
    player = 1;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            table[i][j] = 0;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gridLayoutWidget->setFixedSize(150,150);
    ui->gridLayout->setSpacing(0);
    ui->gridLayoutWidget->setStyleSheet("border: 2px solid #000000;""background-color: white");
    MainWindow::init();
    QSignalMapper *numMap = new QSignalMapper(this);
    connect(numMap, SIGNAL(mapped(int)), this, SLOT(ifClick(int)));
    for (int i = 0; i < 9; i++)
    {
        buttons[i] = new QPushButton("", this);
        buttons[i]->setFont(QFont("", 50));
        buttons[i]->setFixedSize(50,50);
        buttons[i]->setWindowOpacity(0.0);
        buttons[i]->setStyleSheet("border-radius: 0px;");
        numMap->setMapping(buttons[i], i);
        connect(buttons[i], SIGNAL(clicked()), numMap, SLOT(map()));
    }

    for (int i = 0; i < 9; ++i)
        ui->gridLayout->addWidget(buttons[i], i / 3, i % 3);
}

inline bool MainWindow::lineCheck(int x)
{
    for (int i = 0; i < 3; i++)
        if (table[x][i] != player)
            return false;
    return true;
}

inline bool MainWindow::columnCheck(int y)
{
    for (int i = 0; i < 3; i++)
        if (table[i][y] != player)
            return false;
    return true;
}

inline bool MainWindow::diagonalCheck()
{
    bool a = true;
    bool b = true;
    for (int i = 0; i < 3; i++)
    {
        a = a & table[i][i] == player;
        b = b & table[2 - i][i] == player;
    }
    return a || b;
}

bool MainWindow::globalCheck(int i)
{
    int x = i / 3;
    int y = i % 3;
    return lineCheck(x) || columnCheck(y) || diagonalCheck();
}

void MainWindow::ifClick(int i)
{

    if (table[i / 3][i % 3])
        return;

    if (player == 1)
        buttons[i]->setText("X");
    else
        buttons[i]->setText("0");

    table[i / 3][i % 3] = player;

    if (globalCheck(i))
    {
        if (player == 1)
        {
            ui->statusBar->showMessage("X wins!", 1000);
        }
        else
        {
             ui->statusBar->showMessage("O wins!", 1000);
        }

        restart();

    }
     player = -player;
}

void MainWindow::restart()
{
    player = 1;
    for(int i = 0; i < 9; i++)
    {
            table[i / 3][i % 3] = 0;
            buttons[i]->setText("");
    }
}

MainWindow::~MainWindow()
{
    for (int i = 0; i < 9; i++)
        delete buttons[i];
    delete ui;
}
