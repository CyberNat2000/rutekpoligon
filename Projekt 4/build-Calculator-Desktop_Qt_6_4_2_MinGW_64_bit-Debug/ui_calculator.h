/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button5;
    QPushButton *Divide;
    QPushButton *Button1;
    QPushButton *Button0;
    QPushButton *Button6;
    QPushButton *Silnia;
    QPushButton *Pi;
    QPushButton *Button9;
    QPushButton *Modulo;
    QPushButton *Equals;
    QPushButton *Button2;
    QPushButton *Clear;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *Button4;
    QPushButton *Button8;
    QPushButton *Button3;
    QPushButton *Button7;
    QPushButton *Add;
    QPushButton *Multiply;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(371, 335);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setAutoFillBackground(false);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName("Divide");
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setAutoFillBackground(false);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 1, 3, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setAutoFillBackground(false);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 2, 0, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setAutoFillBackground(false);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 1, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setAutoFillBackground(false);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Silnia = new QPushButton(centralwidget);
        Silnia->setObjectName("Silnia");
        sizePolicy1.setHeightForWidth(Silnia->sizePolicy().hasHeightForWidth());
        Silnia->setSizePolicy(sizePolicy1);
        Silnia->setAutoFillBackground(false);
        Silnia->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Silnia, 2, 4, 1, 1);

        Pi = new QPushButton(centralwidget);
        Pi->setObjectName("Pi");
        sizePolicy1.setHeightForWidth(Pi->sizePolicy().hasHeightForWidth());
        Pi->setSizePolicy(sizePolicy1);
        Pi->setAutoFillBackground(false);
        Pi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Pi, 3, 4, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setAutoFillBackground(false);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 4, 2, 1, 1);

        Modulo = new QPushButton(centralwidget);
        Modulo->setObjectName("Modulo");
        sizePolicy1.setHeightForWidth(Modulo->sizePolicy().hasHeightForWidth());
        Modulo->setSizePolicy(sizePolicy1);
        Modulo->setAutoFillBackground(false);
        Modulo->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Modulo, 1, 4, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName("Equals");
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setAutoFillBackground(false);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 4, 4, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setAutoFillBackground(false);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 2, 1, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setAutoFillBackground(false);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Clear, 1, 0, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName("ChangeSign");
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
        ChangeSign->setAutoFillBackground(false);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 1, 2, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName("Subtract");
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);
        Subtract->setAutoFillBackground(false);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 4, 3, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setAutoFillBackground(false);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setAutoFillBackground(false);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 4, 1, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setAutoFillBackground(false);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 2, 2, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setAutoFillBackground(false);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 4, 0, 1, 1);

        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Add->setAutoFillBackground(false);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 3, 3, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName("Multiply");
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
        Multiply->setAutoFillBackground(false);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 3, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton, 1, 5, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 2, 5, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 3, 5, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #00CC00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: #CCCCCC;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_4, 4, 5, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 6);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 371, 22));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);
        QObject::connect(Clear, &QPushButton::clicked, Display, qOverload<>(&QLineEdit::clear));

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Silnia->setText(QCoreApplication::translate("Calculator", "n!", nullptr));
        Pi->setText(QCoreApplication::translate("Calculator", "3.14", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Modulo->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButton->setText(QCoreApplication::translate("Calculator", "2,72", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "PushButton", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H