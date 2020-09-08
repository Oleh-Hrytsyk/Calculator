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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::print_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    ui->result_label->setText(button->text());
}
