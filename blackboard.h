#ifndef BLACKBOARD_H
#define BLACKBOARD_H

#include <QMainWindow>
#include "landing.h"
#include "student.h"

namespace Ui {
class blackboard;
}

class blackboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit blackboard(QWidget *parent = 0);
    ~blackboard();

private slots:
    void on_pushButton_admin_clicked();

    void on_pushButton_student_clicked();

private:
    Ui::blackboard *ui;
    landing *Landing;
    student *Student;
};

#endif // BLACKBOARD_H
