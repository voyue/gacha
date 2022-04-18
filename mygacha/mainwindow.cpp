#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("GACHA!");
    this->setWindowIcon(QIcon(":/new/prefix1/image/NEWapp.png"));
    this->setObjectName("mainWindow");
    this->setStyleSheet("#mainWindow{border-image:url(:/new/prefix1/image/bk1.png);}");

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(rand()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::rand()
{
    if(m.isFinished())
    {
        ui->textEdit->append("Gacha Time is over! Happy Birthday!");
        disconnect(ui->pushButton,SIGNAL(clicked()),this,SLOT(rand()));
    }
    else
    {
    m.gachaRandom();
    ui->textEdit->append(QString::fromStdString(m.showDesp(m.current)));
    }
}


