#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_classBall_clicked()
{

}



void MainWindow::on_personBall_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
    obj1.numder();
}
