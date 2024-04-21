#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "primerclass.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //обьект созданного нами класса
    primerClass obj1;


private slots:
    void on_classBall_clicked();
    void on_personBall_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
