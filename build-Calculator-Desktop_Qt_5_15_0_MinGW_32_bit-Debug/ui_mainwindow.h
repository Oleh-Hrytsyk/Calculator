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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_16;
    QPushButton *pushButton_11;
    QPushButton *pushButton_20;
    QPushButton *btn7;
    QPushButton *pushButton_22;
    QPushButton *btn6;
    QPushButton *btn0;
    QPushButton *pushButton_23;
    QPushButton *btn2;
    QPushButton *btn9;
    QPushButton *btn8;
    QPushButton *pushButton_21;
    QPushButton *btn1;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *btn5;
    QPushButton *pushButton_9;
    QPushButton *btn4;
    QPushButton *pushButton_19;
    QPushButton *btn3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:black;\n"
"}"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 150));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color:white;\n"
"}\n"
""));
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setMargin(20);

        verticalLayout_2->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy2);
        pushButton_16->setFont(font);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #888;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_16, 4, 0, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setFont(font);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background:rgb(55, 122, 255);\n"
"}\n"
"QPushButton::pressed{\n"
"	background: rgb(44, 100, 204);\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_11, 0, 3, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setFont(font);
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background:rgb(55, 122, 255);\n"
"}\n"
"QPushButton::pressed{\n"
"	background: rgb(44, 100, 204);\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_20, 1, 3, 1, 1);

        btn7 = new QPushButton(centralwidget);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn7->setFont(font);
        btn7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn7, 1, 0, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);
        pushButton_22->setFont(font);
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background:rgb(55, 122, 255);\n"
"}\n"
"QPushButton::pressed{\n"
"	background: rgb(44, 100, 204);\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_22, 3, 3, 1, 1);

        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn6->setFont(font);
        btn6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btn0 = new QPushButton(centralwidget);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        btn0->setFont(font);
        btn0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn0, 4, 1, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);
        pushButton_23->setFont(font);
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background:rgb(55, 122, 255);\n"
"}\n"
"QPushButton::pressed{\n"
"	background: rgb(44, 100, 204);\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_23, 4, 3, 1, 1);

        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setFont(font);
        btn2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn2, 3, 1, 1, 1);

        btn9 = new QPushButton(centralwidget);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        btn9->setFont(font);
        btn9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn9, 1, 2, 1, 1);

        btn8 = new QPushButton(centralwidget);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn8->setFont(font);
        btn8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn8, 1, 1, 1, 1);

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);
        pushButton_21->setFont(font);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background:rgb(55, 122, 255);\n"
"}\n"
"QPushButton::pressed{\n"
"	background: rgb(44, 100, 204);\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_21, 2, 3, 1, 1);

        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        sizePolicy2.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy2);
        btn1->setFont(font);
        btn1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn1, 3, 0, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: rgb(63, 93, 154);\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: rgb(86, 128, 212);\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setFont(font);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: rgb(63, 93, 154);\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: rgb(86, 128, 212);\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_10, 0, 2, 1, 1);

        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn5->setFont(font);
        btn5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: rgb(63, 93, 154);\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: rgb(86, 128, 212);\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_9, 0, 1, 1, 1);

        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        sizePolicy2.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy2);
        btn4->setFont(font);
        btn4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setFont(font);
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #444;\n"
"}\n"
"\n"
"QPushButton::pressed{\n"
"	background: #888;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(pushButton_19, 4, 2, 1, 1);

        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setFont(font);
        btn3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: white;\n"
"	border: 1px;\n"
"	background: #222;\n"
"}\n"
"QPushButton::pressed{\n"
"	background: #666;\n"
"    font-size: 28px;\n"
"}"));

        gridLayout->addWidget(btn3, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_23->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H