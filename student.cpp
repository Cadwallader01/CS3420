#include "student.h"
#include "ui_student.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>

student::student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student)
{
    ui->setupUi(this);                                       // This is the constructor for the stdent class.
    ui->stackedWidget_student->setCurrentIndex(0);           // It loads the combo box (dropdown menu)
    ui->comboBox_studentView->addItem("(Choose Student)");   // with all of the student names up launching
    ui->comboBox_studentView->addItem("John Witherspoon");   // this window.
    ui->comboBox_studentView->addItem("Teresa Robers");
    ui->comboBox_studentView->addItem("Garrett Stephens");
    ui->comboBox_studentView->addItem("LeBron James");
}

student::~student()
{
    delete ui;
}

/*-------------------------------------------------------------------------
This function checks to see wheter or not a student has been selected from
the dropdown menu upon clicking the "view" button. If no student was selected,
an error message will occur. If a student has been selected, the user will
be taken to the next window. Each student has a unique login.
--------------------------------------------------------------------------*/

void student::on_pushButton_viewStudent_clicked()
{

    if (ui->comboBox_studentView->currentIndex() == 0)
    {
        QMessageBox::information(this, "Error", "Must select a student");
    }
    else
    {
        ui->stackedWidget_student->setCurrentIndex(1);
    }
}

/*------------------------------------------------------------------------------------------
This function runs once the student clicks submit after entering their username and password.
The login information is verified, and upon correct entry, the student is taken to the next
window where their record file is loaded into the text field for the student to view.
All files are read only.
-------------------------------------------------------------------------------------------*/

void student::on_pushButton_submitStudent_clicked()
{
    if (ui->comboBox_studentView->currentIndex() == 1)
    {
        //ui->stackedWidget_student->setCurrentIndex(1);

        if (ui->lineEdit_studentUsername->text() == "john" && ui->lineEdit_studentPass->text() == "password")
        {
            ui->stackedWidget_student->setCurrentIndex(2);
        }
        else
        {
            QMessageBox::information(this, "Error", "Incorrect login.");
        }

        QFile record1("record1.txt");
        if (!record1.open(QFile::ReadOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream in(&record1);
        QString text = in.readAll();
        ui->plainTextEdit_viewStudent->setPlainText(text);

            record1.close();
        }


    else if (ui->comboBox_studentView->currentIndex() == 2)
    {
        //ui->stackedWidget->setCurrentIndex(3);

        if (ui->lineEdit_studentUsername->text() == "teresa" && ui->lineEdit_studentPass->text() == "password")
        {
            ui->stackedWidget_student->setCurrentIndex(2);
        }
        else
        {
            QMessageBox::information(this, "Error", "Incorrect login.");
        }

        QFile record2("record2.txt");
        if (!record2.open(QFile::ReadOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream in(&record2);
        QString text = in.readAll();
        ui->plainTextEdit_viewStudent->setPlainText(text);

        record2.close();

    }

    else if (ui->comboBox_studentView->currentIndex() == 3)
    {
        //ui->stackedWidget->setCurrentIndex(3);

        if (ui->lineEdit_studentUsername->text() == "garrett" && ui->lineEdit_studentPass->text() == "password")
        {
            ui->stackedWidget_student->setCurrentIndex(2);
        }
        else
        {
            QMessageBox::information(this, "Error", "Incorrect login.");
        }

        QFile record3("record3.txt");
        if (!record3.open(QFile::ReadOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream in(&record3);
        QString text = in.readAll();
        ui->plainTextEdit_viewStudent->setPlainText(text);

        record3.close();

    }

    else if (ui->comboBox_studentView->currentIndex() == 4)
    {
        //ui->stackedWidget->setCurrentIndex(3);

        if (ui->lineEdit_studentUsername->text() == "lebron" && ui->lineEdit_studentPass->text() == "password")
        {
            ui->stackedWidget_student->setCurrentIndex(2);
        }
        else
        {
            QMessageBox::information(this, "Error", "Incorrect login.");
        }

        QFile record4("record4.txt");
        if (!record4.open(QFile::ReadOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream in(&record4);
        QString text = in.readAll();
        ui->plainTextEdit_viewStudent->setPlainText(text);

        record4.close();

    }

}


// This function goes back to the student view selection screen
void student::on_pushButton_goBack_clicked()
{
    ui->stackedWidget_student->setCurrentIndex(0);
}
