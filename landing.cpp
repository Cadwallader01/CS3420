#include "landing.h"
#include "ui_landing.h"
#include<QMessageBox>
#include<QFile>
#include<QTextStream>

landing::landing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::landing)
{
    /* This is the constructor that will pre load the dropdown menu
    with all of the students names before the user is allow to.
    interact-------------------------------------------------------*/
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->comboBox_students->addItem("(Choose Student)");
    ui->comboBox_students->addItem("John Witherspoon");
    ui->comboBox_students->addItem("Teresa Robers");
    ui->comboBox_students->addItem("Garrett Stephens");
    ui->comboBox_students->addItem("LeBron James");
}

landing::~landing()
{
    delete ui;
}

void landing::on_pushButton_loginAdmin_clicked()
{
    QString adminPassword = ui->lineEdit_passwordAdmin->text();
    QString adminUsername = ui->lineEdit_usernameAdmin->text();
    if (adminUsername == "admin" && adminPassword == "password")
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
    else
    {
        QMessageBox::information(this, "Error", "Incorrect Login. Try again.");
    }
}

void landing::on_pushButton_addStudent_clicked()
{

    if (ui->comboBox_students->currentIndex() == 0)
    {
        QMessageBox::information(this, "Error", "Must select a student");
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(2);
    }

}

/*------------------------------------------------------------------------------------------
This function allows the admin to simply view the students record. Files are read only.
Admin must create the student file using the addStudent function before viewing the student
record or else an error will occur.
-------------------------------------------------------------------------------------------*/

void landing::on_pushButton_viewStudent_clicked()
{
    if (ui->comboBox_students->currentIndex() == 0)
    {
        QMessageBox::information(this, "Error", "Must select a student");
    }

    if (ui->comboBox_students->currentIndex() == 1)
    {
        ui->stackedWidget->setCurrentIndex(3);

        QFile record1("record1.txt");
        if (!record1.open(QFile::ReadOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream in(&record1);
        QString text = in.readAll();
        ui->plainTextEdit_viewRecord->setPlainText(text);

        record1.close();
    }

    if (ui->comboBox_students->currentIndex() == 2)
    {
        ui->stackedWidget->setCurrentIndex(3);

        QFile record2("record2.txt");
        if (!record2.open(QFile::ReadOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream in(&record2);
        QString text = in.readAll();
        ui->plainTextEdit_viewRecord->setPlainText(text);

        record2.close();

    }

    if (ui->comboBox_students->currentIndex() == 3)
    {
        ui->stackedWidget->setCurrentIndex(3);

        QFile record3("record3.txt");
        if (!record3.open(QFile::ReadOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream in(&record3);
        QString text = in.readAll();
        ui->plainTextEdit_viewRecord->setPlainText(text);

        record3.close();

    }

    if (ui->comboBox_students->currentIndex() == 4)
    {
        ui->stackedWidget->setCurrentIndex(3);

        QFile record4("record4.txt");
        if (!record4.open(QFile::ReadOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream in(&record4);
        QString text = in.readAll();
        ui->plainTextEdit_viewRecord->setPlainText(text);

        record4.close();

    }

}

/*---------------------------------------------------------------------------
This function allows the admin to create a brand new file for a student.
Based on which student is selected from the dropdown menu, the function
then creates a new file, and writes the desired info into the file, and
stores it so it can be viewed later. A template for the required information
is pre-loaded into the text field.
----------------------------------------------------------------------------*/

void landing::on_pushButton_submitChanges_clicked() //checks to see if student is selected, if not, error occurs.
{
    if (ui->comboBox_students->currentIndex() == 0)
    {
        QMessageBox::information(this, "Error", "Must select a student");
    }

    if (ui->comboBox_students->currentIndex() == 1)
    {
        QFile record1("record1.txt");
        if (!record1.open(QFile::WriteOnly | QFile::Text))  //checks to see if file is open, if notit creates new file.
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream out(&record1);
        QString text = ui->plainTextEdit_editRecord->toPlainText();
        out << text;
        record1.flush();
        record1.close();
    }

    if (ui->comboBox_students->currentIndex() == 2)
    {
        QFile record2("record2.txt");
        if (!record2.open(QFile::WriteOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream out(&record2);
        QString text = ui->plainTextEdit_editRecord->toPlainText();
        out << text;
        record2.flush();
        record2.close();

    }

    if (ui->comboBox_students->currentIndex() == 3)
    {
        QFile record3("record3.txt");
        if (!record3.open(QFile::WriteOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream out(&record3);
        QString text = ui->plainTextEdit_editRecord->toPlainText();
        out << text;
        record3.flush();
        record3.close();

    }

    if (ui->comboBox_students->currentIndex() == 4)
    {
        QFile record4("record4.txt");
        if (!record4.open(QFile::WriteOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream out(&record4);
        QString text = ui->plainTextEdit_editRecord->toPlainText();
        out << text;
        record4.flush();
        record4.close();

    }

}

void landing::on_pushButton_back_2_clicked()  //***
{
    ui->stackedWidget->setCurrentIndex(1);    //***********
}

void landing::on_pushButton_back_clicked()    //*************** These three functions serve as "back" buttons
{
    ui->stackedWidget->setCurrentIndex(1);    //*************** to get back to the previous window.
}

void landing::on_pushButton_back_3_clicked()  //***********
{
    ui->stackedWidget->setCurrentIndex(1);    //***
}


/*-------------------------------------------------------
This function takes the admin to the edit student window
--------------------------------------------------------*/
void landing::on_pushButton_editStudent_clicked()
{
    if (ui->comboBox_students->currentIndex() == 0)
    {
        QMessageBox::information(this, "Error", "Must select a student.");
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(4);
    }

}

/*--------------------------------------------------------------------------------------
This function loads the files in similar to the addStudent
funtion, and this allows the admin to edit the curren
student information.
---------------------------------------------------------------------------------------*/

void landing::on_pushButton_edit_clicked()
{
    if (ui->comboBox_students->currentIndex() == 0)
    {
        QMessageBox::information(this, "Error", "Must select a student");
    }

    if (ui->comboBox_students->currentIndex() == 1)
    {
        QFile record1("record1.txt");
        if (!record1.open(QFile::WriteOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream out(&record1);
        QString text = ui->plainTextEdit_editRecord->toPlainText();
        out << text;
        record1.flush();
        record1.close();
    }

    if (ui->comboBox_students->currentIndex() == 2)
    {
        QFile record2("record2.txt");
        if (!record2.open(QFile::WriteOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream out(&record2);
        QString text = ui->plainTextEdit_editRecord->toPlainText();
        out << text;
        record2.flush();
        record2.close();

    }

    if (ui->comboBox_students->currentIndex() == 3)
    {
        QFile record3("record3.txt");
        if (!record3.open(QFile::WriteOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream out(&record3);
        QString text = ui->plainTextEdit_editRecord->toPlainText();
        out << text;
        record3.flush();
        record3.close();

    }

    if (ui->comboBox_students->currentIndex() == 4)
    {
        QFile record4("record4.txt");
        if (!record4.open(QFile::WriteOnly | QFile::Text))
        {
             QMessageBox::information(this, "Error", "There is no data for this student.");
        }

        QTextStream out(&record4);
        QString text = ui->plainTextEdit_editRecord->toPlainText();
        out << text;
        record4.flush();
        record4.close();

    }

}


