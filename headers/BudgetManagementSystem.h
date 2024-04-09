#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BudgetManagementSystem.h"

class BudgetManagementSystem : public QMainWindow
{
    Q_OBJECT

public:
    BudgetManagementSystem(QWidget *parent = nullptr);
    ~BudgetManagementSystem();

private:
    Ui::BudgetManagementSystemClass ui;
};
