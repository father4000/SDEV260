#ifndef CATEGORYMANAGER_H
#define CATEGORYMANAGER_H

#include "CategoryManagerAPI.h"
class CategoryManager: public CategoryManagerAPI
{
private:
	std::unordered_map<std::string, Category> categories;
	int nextID;
	void addPresetCategories(const std::string& name);
public:
	CategoryManager();
	std::vector<std::string> listAllCategories() const override;

};

#endif // !
