#ifndef BUDGETMANAGERAPI_H
#define BUDGETMANAGERAPI_H
#include <string>
#include "BudgetItem.h"
#include <vector>
class BudgetManagerAPI
{
public:
	virtual ~BudgetManagerAPI() = 0;
	virtual void createBudget(const std::string& name,double total) = 0;
	virtual void addBudgetItem(const BudgetItem& item) = 0;
	virtual std::vector<BudgetItem> getBudgetItems() = 0;
	virtual void editBudget(const std::string& name,double total) = 0;
	virtual void deleteBudget() = 0;
};
#endif