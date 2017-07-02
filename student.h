#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>

namespace Ui {
class student;
}

class student : public QDialog
{
    Q_OBJECT

public:
    explicit student(QWidget *parent = 0);
    ~student();

private slots:
    void on_pushButton_viewStudent_clicked();

    void on_pushButton_submitStudent_clicked();

    void on_pushButton_goBack_clicked();

private:
    Ui::student *ui;
};

#endif // STUDENT_H
