#include "blackboard.h"
#include "ui_blackboard.h"
#include<QtCore/QFile>
#include<QtCore/QTextStream>
#include<QMessageBox>

blackboard::blackboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::blackboard)
{
    ui->setupUi(this);
}

blackboard::~blackboard()
{
    delete ui;
}

/*-------------------------------------------------------
This function opens a the admin window if the admin
button is clicked. This current window will then be hid.
--------------------------------------------------------*/

void blackboard::on_pushButton_admin_clicked()
{
    hide();
    Landing = new landing(this);
    Landing->show();
}

/*-------------------------------------------------------
This function opens a the student window if the student
button is clicked. This current window will then be hid.
--------------------------------------------------------*/

void blackboard::on_pushButton_student_clicked()
{
    hide();
    Student = new student(this);
    Student->show();

}
