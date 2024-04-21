#include "BudgetManagementSystem.h"
#include <QtWidgets/QApplication>
#include "BudgetClass.h"
#include "SavingsClass.h"


void dataBaseTest();//Function for testing database methods.


int main(int argc, char *argv[])
{   
    QApplication a(argc, argv);
    BudgetManagementSystem w;
    w.show();
    return a.exec();
}


//Function for testing database methods.
void dataBaseTest(){
    //Data fields
    Budget testBudget = Budget();
    //Savings testSavings = Savings();

    //qDebug() << myBudget.getItems("");


}//End of dataBaseTest


