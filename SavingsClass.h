//Savings Class Header File

#include <iostream>
#include <string>
#include <exception>

class Savings {
private:
	std::string name = "Default";

public:
	//Constructor
	Savings();

	//Accessors
	double getGoal(std::string name) throw(std::invalid_argument);
	double getTotal(std::string name) throw(std::invalid_argument);
	void getSavings() const;

	//Mutators
	void deleteSavings(std::string name) throw(std::invalid_argument);
	void changeGoal(std::string name, double newGoal) throw(std::invalid_argument);
	void addSavings(std::string name) throw(std::invalid_argument);

};//End of class