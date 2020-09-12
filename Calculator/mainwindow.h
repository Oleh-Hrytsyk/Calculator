#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    double first_number;

private slots:
    void print_numbers();
    void print_dot();
    void change_sign();
    void make_procent();
    void math_operations();
    void make_operation();
    void del();
    void clear_label();
};
#endif // MAINWINDOW_H
