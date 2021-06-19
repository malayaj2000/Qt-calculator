/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
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
    QPushButton *Button_8;
    QPushButton *division;
    QPushButton *Button_5;
    QPushButton *Button_2;
    QPushButton *allclc;
    QPushButton *Button_1;
    QLineEdit *Display;
    QPushButton *del;
    QPushButton *rightBracket;
    QPushButton *leftBracket;
    QPushButton *Button_4;
    QPushButton *plus;
    QPushButton *sub;
    QPushButton *Button_0;
    QPushButton *solve;
    QPushButton *Button_3;
    QPushButton *Button_6;
    QPushButton *mul;
    QPushButton *Button_9;
    QPushButton *Button_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(800, 600);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button_8->sizePolicy().hasHeightForWidth());
        Button_8->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies(QStringList{QString::fromUtf8("Cascadia Code")});
        font.setPointSize(14);
        Button_8->setFont(font);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_8, 1, 1, 1, 1);

        division = new QPushButton(centralwidget);
        division->setObjectName(QString::fromUtf8("division"));
        sizePolicy.setHeightForWidth(division->sizePolicy().hasHeightForWidth());
        division->setSizePolicy(sizePolicy);
        division->setFont(font);
        division->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(division, 2, 4, 1, 1);

        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        sizePolicy.setHeightForWidth(Button_5->sizePolicy().hasHeightForWidth());
        Button_5->setSizePolicy(sizePolicy);
        Button_5->setFont(font);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_5, 2, 1, 1, 1);

        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        sizePolicy.setHeightForWidth(Button_2->sizePolicy().hasHeightForWidth());
        Button_2->setSizePolicy(sizePolicy);
        Button_2->setFont(font);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_2, 3, 1, 1, 1);

        allclc = new QPushButton(centralwidget);
        allclc->setObjectName(QString::fromUtf8("allclc"));
        sizePolicy.setHeightForWidth(allclc->sizePolicy().hasHeightForWidth());
        allclc->setSizePolicy(sizePolicy);
        allclc->setFont(font);
        allclc->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(allclc, 3, 4, 1, 1);

        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        sizePolicy.setHeightForWidth(Button_1->sizePolicy().hasHeightForWidth());
        Button_1->setSizePolicy(sizePolicy);
        Button_1->setFont(font);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_1, 3, 0, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies(QStringList{QString::fromUtf8("Cascadia Code")});
        font1.setPointSize(22);
        Display->setFont(font1);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color:#444444;\n"
"	border:2px,solid;\n"
"	border-radius:8px;\n"
"	padding:5px;\n"
"	color:#EDEDED;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        del = new QPushButton(centralwidget);
        del->setObjectName(QString::fromUtf8("del"));
        sizePolicy.setHeightForWidth(del->sizePolicy().hasHeightForWidth());
        del->setSizePolicy(sizePolicy);
        del->setFont(font);
        del->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(del, 3, 3, 1, 1);

        rightBracket = new QPushButton(centralwidget);
        rightBracket->setObjectName(QString::fromUtf8("rightBracket"));
        sizePolicy.setHeightForWidth(rightBracket->sizePolicy().hasHeightForWidth());
        rightBracket->setSizePolicy(sizePolicy);
        rightBracket->setFont(font);
        rightBracket->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(rightBracket, 4, 3, 1, 1);

        leftBracket = new QPushButton(centralwidget);
        leftBracket->setObjectName(QString::fromUtf8("leftBracket"));
        sizePolicy.setHeightForWidth(leftBracket->sizePolicy().hasHeightForWidth());
        leftBracket->setSizePolicy(sizePolicy);
        leftBracket->setFont(font);
        leftBracket->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(leftBracket, 4, 2, 1, 1);

        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        sizePolicy.setHeightForWidth(Button_4->sizePolicy().hasHeightForWidth());
        Button_4->setSizePolicy(sizePolicy);
        Button_4->setFont(font);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_4, 2, 0, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        sizePolicy.setHeightForWidth(plus->sizePolicy().hasHeightForWidth());
        plus->setSizePolicy(sizePolicy);
        plus->setFont(font);
        plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(plus, 1, 3, 1, 1);

        sub = new QPushButton(centralwidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sizePolicy.setHeightForWidth(sub->sizePolicy().hasHeightForWidth());
        sub->setSizePolicy(sizePolicy);
        sub->setFont(font);
        sub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(sub, 1, 4, 1, 1);

        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        sizePolicy.setHeightForWidth(Button_0->sizePolicy().hasHeightForWidth());
        Button_0->setSizePolicy(sizePolicy);
        Button_0->setFont(font);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_0, 4, 0, 1, 1);

        solve = new QPushButton(centralwidget);
        solve->setObjectName(QString::fromUtf8("solve"));
        sizePolicy.setHeightForWidth(solve->sizePolicy().hasHeightForWidth());
        solve->setSizePolicy(sizePolicy);
        solve->setFont(font);
        solve->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(solve, 4, 4, 1, 1);

        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        sizePolicy.setHeightForWidth(Button_3->sizePolicy().hasHeightForWidth());
        Button_3->setSizePolicy(sizePolicy);
        Button_3->setFont(font);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_3, 3, 2, 1, 1);

        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        sizePolicy.setHeightForWidth(Button_6->sizePolicy().hasHeightForWidth());
        Button_6->setSizePolicy(sizePolicy);
        Button_6->setFont(font);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_6, 2, 2, 1, 1);

        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        sizePolicy.setHeightForWidth(mul->sizePolicy().hasHeightForWidth());
        mul->setSizePolicy(sizePolicy);
        mul->setFont(font);
        mul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(mul, 2, 3, 1, 1);

        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        sizePolicy.setHeightForWidth(Button_9->sizePolicy().hasHeightForWidth());
        Button_9->setSizePolicy(sizePolicy);
        Button_9->setFont(font);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_9, 1, 2, 1, 1);

        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        sizePolicy.setHeightForWidth(Button_7->sizePolicy().hasHeightForWidth());
        Button_7->setSizePolicy(sizePolicy);
        Button_7->setFont(font);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:#FF616D;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#D83A56;\n"
"	border:2px,solid;\n"
"	border-radius:20px;\n"
"	padding:5px;\n"
"}"));

        gridLayout->addWidget(Button_7, 1, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        division->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        allclc->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        del->setText(QCoreApplication::translate("Calculator", "del", nullptr));
        rightBracket->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        leftBracket->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        Button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        plus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        sub->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        solve->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        mul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
