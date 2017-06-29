#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "studentlogin.h"
#include "adminlogin.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_Student_clicked();

    void on_pushButton_Administrator_clicked();

private:
    Ui::MainWindow *ui;
    StudentLogin *studentLogin;
    AdminLogin *adminLogin;
};

#endif // MAINWINDOW_H
