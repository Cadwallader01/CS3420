#include "studentinfo.h"
#include "ui_studentinfo.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
StudentInfo::StudentInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentInfo)
{
    ui->setupUi(this);
}

StudentInfo::~StudentInfo()
{
    delete ui;
}

void StudentInfo::on_pushButton_clicked()
{
    QFile file("D:/Qt/test/StudentManageSystem5/student1.text");
    if (!file.open(QFile::WriteOnly| QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }
    QTextStream out(&file);
    QString text= ui->plainTextEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();
}

void StudentInfo::on_pushButton_2_clicked()
{
    QFile file("D:/Qt/test/StudentManageSystem5/student1.text");
    if (!file.open(QFile::ReadOnly| QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }
    QTextStream in(&file);
    QString text= in.readAll();
    ui->plainTextEdit->setPlainText(text);

    file.close();
}
