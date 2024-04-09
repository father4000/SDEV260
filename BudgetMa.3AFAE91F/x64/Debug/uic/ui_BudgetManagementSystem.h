/********************************************************************************
** Form generated from reading UI file 'BudgetManagementSystem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGETMANAGEMENTSYSTEM_H
#define UI_BUDGETMANAGEMENTSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BudgetManagementSystemClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BudgetManagementSystemClass)
    {
        if (BudgetManagementSystemClass->objectName().isEmpty())
            BudgetManagementSystemClass->setObjectName("BudgetManagementSystemClass");
        BudgetManagementSystemClass->resize(600, 400);
        centralWidget = new QWidget(BudgetManagementSystemClass);
        centralWidget->setObjectName("centralWidget");
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 120, 191, 71));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(80, 220, 191, 71));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(340, 120, 191, 71));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(340, 220, 191, 71));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(90, 30, 431, 71));
        BudgetManagementSystemClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BudgetManagementSystemClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        BudgetManagementSystemClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BudgetManagementSystemClass);
        mainToolBar->setObjectName("mainToolBar");
        BudgetManagementSystemClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BudgetManagementSystemClass);
        statusBar->setObjectName("statusBar");
        BudgetManagementSystemClass->setStatusBar(statusBar);

        retranslateUi(BudgetManagementSystemClass);

        QMetaObject::connectSlotsByName(BudgetManagementSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *BudgetManagementSystemClass)
    {
        BudgetManagementSystemClass->setWindowTitle(QCoreApplication::translate("BudgetManagementSystemClass", "BudgetManagementSystem", nullptr));
        pushButton->setText(QCoreApplication::translate("BudgetManagementSystemClass", "Budget", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BudgetManagementSystemClass", "Savings", nullptr));
        pushButton_3->setText(QCoreApplication::translate("BudgetManagementSystemClass", "Expenses", nullptr));
        pushButton_4->setText(QCoreApplication::translate("BudgetManagementSystemClass", "Funds", nullptr));
        textEdit->setHtml(QCoreApplication::translate("BudgetManagementSystemClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700; color:#459fc8;\">Budget Management System</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BudgetManagementSystemClass: public Ui_BudgetManagementSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGETMANAGEMENTSYSTEM_H
