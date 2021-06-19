#include "calculator.h"
#include "./ui_calculator.h"
double displayVal = 0.0;  //default diaplay value
bool divi = false;        // division trigger
bool mul = false;           // multipication trigger
bool add = false;           // addition trigger
bool sub = false;           // subtraction trigger
Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(displayVal)); // setting default diaplay value

    QPushButton *numbutton[10];                        // array of numarical push button

    // loop to connect when ever a numarical button is pressed to  the function Numbuttonpressed()

    for(int i = 0; i<10;i++){
        QString buttonName = "Button_" + QString::number(i);
        numbutton[i] = Calculator::findChild<QPushButton*>(buttonName);
        connect(numbutton[i],SIGNAL(released()),this,
                SLOT(Numbuttonpressed()));
    }

    //connect when ever a mathematical operation button is pressed to  the function mathButtonPressed()

    connect(ui->plus,SIGNAL(released()),this,
            SLOT(mathButtonPressed()));

    connect(ui->sub,SIGNAL(released()),this,
            SLOT(mathButtonPressed()));

    connect(ui->mul,SIGNAL(released()),this,
            SLOT(mathButtonPressed()));

    connect(ui->division,SIGNAL(released()),this,
            SLOT(mathButtonPressed()));

    //connect when ever a solve( = ) operation button is pressed to  the function solve()

    connect(ui->solve,SIGNAL(released()),this,
            SLOT(solve()));

    //connect when ever a ALL CLEAR operation button is pressed to  the function Allclear()

    connect(ui->allclc,SIGNAL(released()),this,
            SLOT(Allclear()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::Numbuttonpressed(){
    QPushButton *botton = (QPushButton*)sender();
    QString buttonVal = botton->text();
    QString displayVal = ui->Display->text();
    if(displayVal.toDouble() == 0 || displayVal.toDouble()==0.0){
        ui->Display->setText(buttonVal);
    }
    else{
        QString newdisplayVal = displayVal + buttonVal;
        double newdisplayNumVal = newdisplayVal.toDouble();

        ui->Display->setText(QString::number(newdisplayNumVal,'g',16));


    }
}

void Calculator::mathButtonPressed(){
    divi = false;
    mul = false;
    add = false;
    sub = false;
    QString newdisplayValue = ui->Display->text();
    displayVal = newdisplayValue.toDouble();
    QPushButton *button = (QPushButton*)sender();
    QString buttonVal = button->text();
    if(QString::compare(buttonVal,"/",Qt::CaseInsensitive)==0){
        divi = true;
    }
    else if(QString::compare(buttonVal,"*",Qt::CaseInsensitive)==0){
        mul = true;
    }
    else if(QString::compare(buttonVal,"+",Qt::CaseInsensitive)==0){
        add = true;
    }
    else if(QString::compare(buttonVal,"-",Qt::CaseInsensitive)==0){
        sub = true;
    }
     ui->Display->setText(newdisplayValue + buttonVal);
}

void Calculator::solve(){
    double solution =0.0;
    double newdisplayVal = ui->Display->text().toDouble();
    if(add){
        solution = displayVal + newdisplayVal;
        ui->Display->setText(QString::number(solution));
    }
    else if(sub){
        solution = displayVal - newdisplayVal;
        ui->Display->setText(QString::number(solution));
    }
    else if(mul){
        solution = displayVal * newdisplayVal;
        ui->Display->setText(QString::number(solution));
    }
    else if(divi){
        if(newdisplayVal != 0){
            solution = displayVal / newdisplayVal;
            ui->Display->setText(QString::number(solution));
        }
        else{
          ui->Display->setText("inf");
        }
     }
}

void Calculator::Allclear(){
    displayVal = 0.0;
    ui->Display->setText(QString::number(displayVal));
}






















