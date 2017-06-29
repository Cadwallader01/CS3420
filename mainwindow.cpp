#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Student_clicked()
{
    studentLogin = new StudentLogin(this);
    studentLogin->show();
}

void MainWindow::on_pushButton_Administrator_clicked()
{
    adminLogin= new AdminLogin(this);
    studentLogin->show();
}
