#include "calculator.h"
#include "ui_calculator.h"
#include <QRegularExpression>

double calcVal=0.0;
bool divTrigger=false;
bool multTrigger=false;
bool addTrigger=false;
bool subTrigger=false;
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButton[10];
    for(int i=0; i<10; ++i){
        QString butName= "Button" + QString::number(i);
        numButton[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButton[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
    connect(ui->Add, SIGNAL(released()), this, SLOT(MathButtonPresed()));
    connect(ui->Subtract, SIGNAL(released()), this, SLOT(MathButtonPresed()));
    connect(ui->Multiply, SIGNAL(released()), this, SLOT(MathButtonPresed()));
    connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtonPresed()));
    connect(ui->Equals, SIGNAL(released()), this, SLOT(EqualButton()));
    connect(ui->ChangeSign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){
        ui->Display->setText(butVal);
    }
    else{
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}
void Calculator::MathButtonPresed(){
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal= button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive)==0){
        divTrigger = true;
    }
    else if(QString::compare(butVal, "*", Qt::CaseInsensitive)==0){
        multTrigger = true;
    }
    else if(QString::compare(butVal, "+", Qt::CaseInsensitive)==0){
        addTrigger = true;
    }
    else {
        subTrigger = true;
    }
    ui->Display->setText("");
}

void Calculator::EqualButton(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger || multTrigger || divTrigger){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        }
        else if(subTrigger){
            solution = calcVal - dblDisplayVal;
        }
        else if(multTrigger){
            solution = calcVal * dblDisplayVal;
        }
        else{
            solution = calcVal / dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}
void Calculator::ChangeNumberSign() {

    QString displayVal = ui->Display->text();
    QRegularExpression reg("[-]?[0-9.]*");
    QRegularExpressionMatch match = reg.match(displayVal);
    if(match.hasMatch()) {
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }

 }




