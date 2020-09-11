/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *operation_label;
    QLabel *result_label;
    QGridLayout *gridLayout;
    QPushButton *btn6;
    QPushButton *btn_procent;
    QPushButton *btn3;
    QPushButton *btn;
    QPushButton *btn0;
    QPushButton *btn_multiply;
    QPushButton *btn7;
    QPushButton *btn4;
    QPushButton *btn2;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn_clear;
    QPushButton *btn_sign;
    QPushButton *btn5;
    QPushButton *btn_plus;
    QPushButton *btn_del;
    QPushButton *btn_minus;
    QPushButton *btn_dot;
    QPushButton *btn_divide;
    QPushButton *btn1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(700, 800);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:#222222;\n"
"}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        operation_label = new QLabel(centralwidget);
        operation_label->setObjectName(QString::fromUtf8("operation_label"));
        QFont font;
        font.setPointSize(14);
        operation_label->setFont(font);
        operation_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #dddddd;\n"
"}\n"
"\n"
""));
        operation_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        operation_label->setMargin(20);

        verticalLayout_2->addWidget(operation_label);

        result_label = new QLabel(centralwidget);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(result_label->sizePolicy().hasHeightForWidth());
        result_label->setSizePolicy(sizePolicy1);
        result_label->setMinimumSize(QSize(0, 150));
        QFont font1;
        font1.setPointSize(24);
        result_label->setFont(font1);
        result_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: #dddddd;\n"
"}\n"
""));
        result_label->setFrameShape(QFrame::NoFrame);
        result_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result_label->setMargin(20);

        verticalLayout_2->addWidget(result_label);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn6->setFont(font1);
        btn6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btn_procent = new QPushButton(centralwidget);
        btn_procent->setObjectName(QString::fromUtf8("btn_procent"));
        sizePolicy.setHeightForWidth(btn_procent->sizePolicy().hasHeightForWidth());
        btn_procent->setSizePolicy(sizePolicy);
        btn_procent->setFont(font1);
        btn_procent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_procent, 0, 2, 1, 1);

        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setFont(font1);
        btn3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn3, 3, 2, 1, 1);

        btn = new QPushButton(centralwidget);
        btn->setObjectName(QString::fromUtf8("btn"));
        sizePolicy.setHeightForWidth(btn->sizePolicy().hasHeightForWidth());
        btn->setSizePolicy(sizePolicy);
        btn->setFont(font1);
        btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #4B8BFF;\n"
"	border-style: solid;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #5C9CFF;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn, 4, 3, 1, 1);

        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setFont(font1);
        btn0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn0, 4, 1, 1, 1);

        btn_multiply = new QPushButton(centralwidget);
        btn_multiply->setObjectName(QString::fromUtf8("btn_multiply"));
        sizePolicy.setHeightForWidth(btn_multiply->sizePolicy().hasHeightForWidth());
        btn_multiply->setSizePolicy(sizePolicy);
        btn_multiply->setFont(font1);
        btn_multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #4B8BFF;\n"
"	border-style: solid;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #5C9CFF;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_multiply, 1, 3, 1, 1);

        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn7->setFont(font1);
        btn7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy2);
        btn4->setFont(font1);
        btn4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setFont(font1);
        btn2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn2, 3, 1, 1, 1);

        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn8->setFont(font1);
        btn8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        btn9->setFont(font1);
        btn9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        sizePolicy.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy);
        btn_clear->setFont(font1);
        btn_clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_clear, 0, 0, 1, 1);

        btn_sign = new QPushButton(centralwidget);
        btn_sign->setObjectName(QString::fromUtf8("btn_sign"));
        sizePolicy2.setHeightForWidth(btn_sign->sizePolicy().hasHeightForWidth());
        btn_sign->setSizePolicy(sizePolicy2);
        btn_sign->setFont(font1);
        btn_sign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_sign, 4, 0, 1, 1);

        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn5->setFont(font1);
        btn5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn_plus = new QPushButton(centralwidget);
        btn_plus->setObjectName(QString::fromUtf8("btn_plus"));
        sizePolicy.setHeightForWidth(btn_plus->sizePolicy().hasHeightForWidth());
        btn_plus->setSizePolicy(sizePolicy);
        btn_plus->setFont(font1);
        btn_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #4B8BFF;\n"
"	border-style: solid;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #5C9CFF;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_plus, 3, 3, 1, 1);

        btn_del = new QPushButton(centralwidget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        sizePolicy.setHeightForWidth(btn_del->sizePolicy().hasHeightForWidth());
        btn_del->setSizePolicy(sizePolicy);
        btn_del->setFont(font1);
        btn_del->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_del, 0, 1, 1, 1);

        btn_minus = new QPushButton(centralwidget);
        btn_minus->setObjectName(QString::fromUtf8("btn_minus"));
        sizePolicy.setHeightForWidth(btn_minus->sizePolicy().hasHeightForWidth());
        btn_minus->setSizePolicy(sizePolicy);
        btn_minus->setFont(font1);
        btn_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #4B8BFF;\n"
"	border-style: solid;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #5C9CFF;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_minus, 2, 3, 1, 1);

        btn_dot = new QPushButton(centralwidget);
        btn_dot->setObjectName(QString::fromUtf8("btn_dot"));
        sizePolicy.setHeightForWidth(btn_dot->sizePolicy().hasHeightForWidth());
        btn_dot->setSizePolicy(sizePolicy);
        btn_dot->setFont(font1);
        btn_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_dot, 4, 2, 1, 1);

        btn_divide = new QPushButton(centralwidget);
        btn_divide->setObjectName(QString::fromUtf8("btn_divide"));
        sizePolicy.setHeightForWidth(btn_divide->sizePolicy().hasHeightForWidth());
        btn_divide->setSizePolicy(sizePolicy);
        btn_divide->setFont(font1);
        btn_divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #4B8BFF;\n"
"	border-style: solid;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #5C9CFF;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn_divide, 0, 3, 1, 1);

        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        sizePolicy2.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy2);
        btn1->setFont(font1);
        btn1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #bbbbbb;\n"
"	border: 0.5px;\n"
"	background: #222222;\n"
"	border-style: solid;\n"
"	border-color: #444444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #333333;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn1, 3, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 5);
        verticalLayout_2->setStretch(2, 10);

        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        operation_label->setText(QString());
        result_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_procent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        btn_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
