#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;
private slots:

    void Numbuttonpressed(); // function for reacting to numarical button like 1,2,3,4,5,6,7,8,9,0
    void solve();           // function to porform mathematical oparation
    void mathButtonPressed(); // fuction to identify the mathematical opreation
    void Allclear();          // function to remove previous value and clear the display
};
#endif // CALCULATOR_H
