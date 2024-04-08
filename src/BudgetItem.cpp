#include"BudgetItem.h"
BudgetItem::BudgetItem()
{
	this->id = 0;
	this->budgetId = 0;
	this->categoryId = 0;
	this->amount = 0;
	this->name = "";
}

BudgetItem::BudgetItem(int id, int budgetId, const std::string& name, double amount, int categoryId)
{
	this->id = id;
	this->budgetId = budgetId;
	this->categoryId = categoryId;
	this->amount = amount;
	this->name = name;
	this->categoryId = categoryId;
}