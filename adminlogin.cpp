#include "adminlogin.h"
#include "ui_adminlogin.h"
#include <QMessageBox>

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_pushButton_A_Login_clicked()
{
    QString username=ui->lineEdit_A_Username->text();
    QString password=ui->lineEdit_A_Password->text();
    if (username=="admin1" && password=="admin1")
    {
        QMessageBox::information(this, "Login", "Username or password is correct");



    }
     else
    {
        QMessageBox::warning(this, "Login", "Username or password is not correct");
    }
}
