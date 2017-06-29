#include "studentlogin.h"
#include "ui_studentlogin.h"
#include <QMessageBox>
StudentLogin::StudentLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentLogin)
{
    ui->setupUi(this);
}

StudentLogin::~StudentLogin()
{
    delete ui;
}


void StudentLogin::on_pushButton_S_Login_clicked()
{
    QString username=ui->lineEdit_S_Username->text();
    QString password=ui->lineEdit_S_Password->text();
    if (username=="student1" && password=="student1")
    {
        QMessageBox::information(this, "Login", "Username or password is correct");



    }
     else
    {
        QMessageBox::warning(this, "Login", "Username or password is not correct");
    }
}
