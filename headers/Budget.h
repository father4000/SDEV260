#ifndef BUDGET_H
#define BUDGET_H
#include<vector>
#include<string>
#include"BudgetItem.h"


class Budget
{
private:
	int id;
	std::string name;
	double balance;
	std::vector<BudgetItem> items;

};

#endif // !

