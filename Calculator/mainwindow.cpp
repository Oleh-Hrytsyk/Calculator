#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btn0, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn1, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn2, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn3, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn4, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn5, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn6, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn7, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn8, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn9, SIGNAL(clicked()), this, SLOT(print_numbers()));
    connect(ui->btn_dot, SIGNAL(clicked()), this, SLOT(print_dot()));
    connect(ui->btn_sign, SIGNAL(clicked()), this, SLOT(change_sign()));
    connect(ui->btn_procent, SIGNAL(clicked()), this, SLOT(make_procent()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::print_numbers()
{
    QPushButton *button = (QPushButton *)sender();
    double numbers;
    QString new_label;
    if(button->text() == '0'){
        ui->result_label->setText(ui->result_label->text()+'0');
        return;
    }
    numbers = (ui->result_label->text() + button->text()).toDouble();
    new_label = QString::number(numbers, 'g', 15);
    ui->result_label->setText(new_label);
}

void MainWindow::print_dot(){
    if(!(ui->result_label->text().contains('.'))){
    ui->result_label->setText(ui->result_label->text()+'.');
    }
}

void MainWindow::change_sign()
{
    double numbers;
    QString new_label;

    numbers = ui->result_label->text().toDouble();
    new_label = QString::number(-numbers, 'g', 15);
    ui->result_label->setText(new_label);

}

void MainWindow::make_procent(){
    double numbers;
    QString new_label;

    numbers = ui->result_label->text().toDouble()*0.01;
    new_label = QString::number(numbers, 'g', 15);
    ui->result_label->setText(new_label);

}
