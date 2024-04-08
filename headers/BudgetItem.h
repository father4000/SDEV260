#ifndef BUDGETITEM_H
#define BUDGETITEM_H
#include <string>
class BudgetItem
{
	private:
		double amount; // amount of item
		std::string name;// name of item
		int id; // identifier 
		int budgetId;// identifier of budget
		int categoryId;// identifier of category
	public:
		BudgetItem();
		BudgetItem(int id, int budgetId, const std::string& name, double amount, int categoryId);
		// setter and getter
};

#endif // !
