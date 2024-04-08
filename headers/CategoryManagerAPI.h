#ifndef CATEGORYMANAGERAPI_H
#define CATEGORYMANAGERAPI_H
#include"Category.h"
#include<vector>
class CategoryManagerAPI
{
public:
		virtual ~CategoryManagerAPI() = 0;
		virtual std::vector<std::string> listAllCategories() const = 0;
		virtual void addUserDefinedCategory(const std::string& name) = 0;
};

#endif
