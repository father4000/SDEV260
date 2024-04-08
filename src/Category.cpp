#include "Category.h"
Category::Category()
{
	this->id = 0;
	this->type = "Default";
	this->isPreset = false;
}

Category::Category(int id, const std::string& type, bool isPreset)
{
	this->id = id;
	this->type = type;
	this->isPreset = isPreset;
}

