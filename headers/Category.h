#ifndef CATEGORY_H
#define CATEGORY_H
#include <string>
#include <unordered_map>

const std::unordered_map<int, std::string> categoryMap = {
	{ 0, "Housing" },
	{ 1, "Food" },
	{ 2, "Transport" },
	{ 3, "Utilities" },
	{ 4, "Technology" },
	{5, "Insurance"},
	{ 6, "Health" }
};
class Category
{
private:
	int id;
	std::string type;
	bool isPreset;
public:
	Category();
	Category(int id, const std::string& type, bool isPreset);
};
#endif // !
