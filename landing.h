#ifndef LANDING_H
#define LANDING_H

#include <QDialog>

namespace Ui {
class landing;
}

class landing : public QDialog
{
    Q_OBJECT

public:
    explicit landing(QWidget *parent = 0);
    ~landing();

private slots:
    void on_pushButton_loginAdmin_clicked();

    void on_pushButton_viewStudent_clicked();

    void on_pushButton_addStudent_clicked();

    void on_pushButton_back_2_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_submitChanges_clicked();

    void on_pushButton_editStudent_clicked();

    void on_pushButton_edit_clicked();

    void on_pushButton_back_3_clicked();

private:
    Ui::landing *ui;
};

#endif // LANDING_H
