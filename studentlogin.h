#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QDialog>
#include "studentinfo.h"
namespace Ui {
class StudentLogin;
}

class StudentLogin : public QDialog
{
    Q_OBJECT

public:
    explicit StudentLogin(QWidget *parent = 0);
    ~StudentLogin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_S_Cancer_clicked();

    void on_pushButton_S_Login_clicked();

private:
    Ui::StudentLogin *ui;
    StudentInfo *studentInfo;
};

#endif // STUDENTLOGIN_H
