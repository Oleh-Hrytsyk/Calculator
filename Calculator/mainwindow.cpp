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
    connect(ui->btn_minus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->btn_plus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->btn_divide, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->btn_multiply, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->btn, SIGNAL(clicked()), this, SLOT(make_operation()));
    connect(ui->btn_clear, SIGNAL(clicked()), this, SLOT(clear_label()));
    connect(ui->btn_del, SIGNAL(clicked()), this, SLOT(del()));


    ui->btn_divide->setCheckable(true);
    ui->btn_multiply->setCheckable(true);
    ui->btn_minus->setCheckable(true);
    ui->btn_plus->setCheckable(true);
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

void MainWindow::math_operations(){

    ui->btn_divide->setChecked(false);
    ui->btn_multiply->setChecked(false);
    ui->btn_minus->setChecked(false);
    ui->btn_plus->setChecked(false);

    QPushButton *button = (QPushButton *)sender();

    button->setChecked(true);

    ui->operation_label->setText(ui->result_label->text()+button->text());

    first_number = ui->result_label->text().toDouble();

    ui->result_label->setText("");
}

void MainWindow::make_operation(){
    double numbers;
    QString new_label;

    numbers = ui->result_label->text().toDouble();


    if(ui->btn_divide->isChecked()){
        if(numbers == 0){
            ui->result_label->setText("");
        }
        else{
            numbers = first_number/numbers;
            new_label = QString::number(numbers, 'g', 15);
            ui->result_label->setText(new_label);
        }
    }
    else if(ui->btn_multiply->isChecked()){
        numbers = first_number*numbers;
        new_label = QString::number(numbers, 'g', 15);
        ui->result_label->setText(new_label);
    }
    else if(ui->btn_plus->isChecked()){
        numbers = first_number+numbers;
        new_label = QString::number(numbers, 'g', 15);
        ui->result_label->setText(new_label);
    }
    else if(ui->btn_minus->isChecked()){
        numbers = first_number-numbers;
        new_label = QString::number(numbers, 'g', 15);
        ui->result_label->setText(new_label);
    }
     ui->operation_label->setText("");
}

void MainWindow::clear_label(){
    ui->result_label->setText("");
    ui->operation_label->setText("");
}

void MainWindow::del(){
    QString new_label;

    if(ui->result_label->text() == ""){
        ui->btn_divide->setChecked(false);
        ui->btn_multiply->setChecked(false);
        ui->btn_minus->setChecked(false);
        ui->btn_plus->setChecked(false);
        new_label=ui->operation_label->text();
        ui->operation_label->setText("");
        new_label = new_label.remove(new_label.size()-1,1);
        ui->result_label->setText(new_label);
    }
    else{
        new_label=ui->result_label->text();
        new_label = new_label.remove(new_label.size()-1,1);
        ui->result_label->setText(new_label);
    }
}
