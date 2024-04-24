//Savings Class Header File

#include <iostream>
#include <string>
#include <exception>
#include "sqlite3.h"

class Savings {
private:
	std::string name = "Default";

public:
	//Constructor
	Savings() {

	}

	//Destructor
	~Savings() {

	}

	//Accessors
	//Returns a double for goal. Needs a savings name.
	double getGoal(std::string savingsName) throw(std::invalid_argument) {
		//Data fields.
		std::string query = "";//Query to send to database.
		sqlite3* db;//My database file.
		sqlite3_stmt* qres;//Results from query.
		double goal = 0;//Goal to send back.

		//Checking name integrity.
		if (savingsName.size() == 0) {
			throw std::invalid_argument("Name cannot be blank.\n");
		}

		//Opening database and checking for errors.
		if (sqlite3_open_v2("dataBase.db", &db, SQLITE_OPEN_READWRITE, NULL) != SQLITE_OK) {
			sqlite3_close(db);
			std::string error = "Error opening database. ";
			error += sqlite3_errmsg(db);
			error += "\n";
			throw std::invalid_argument(error);
		}
		else {
			//Building query
			query = "SELECT goal FROM saving WHERE sav_name LIKE '";
			query += savingsName + "'; ";

			//Making query and checking for error.
			if (sqlite3_prepare_v2(db, query.c_str(), -1, &qres, NULL) != SQLITE_OK) {
				sqlite3_finalize(qres);
				std::string error = "There was an error in savings goal query. ";
				error += sqlite3_errmsg(db);
				error += "\n";
				throw std::invalid_argument(error);
			}
			else {
				sqlite3_step(qres);//Step in.
				goal = sqlite3_column_double(qres, 0);//Set total from result
				sqlite3_finalize(qres);//Close result.
			}
		}//End of main else.

		//Closing database.
		sqlite3_close(db);

		return goal;
	}//End of getGoal

	//Returns a double for total. Needs a savings name.
	double getTotal(std::string savingsName) throw(std::invalid_argument) {
		//Data fields.
		std::string query = "";//Query to send to database.
		sqlite3* db;//My database file.
		sqlite3_stmt* qres;//Results from query.
		double total = 0;//Goal to send back.

		//Checking name integrity.
		if (savingsName.size() == 0) {
			throw std::invalid_argument("Name cannot be blank.\n");
		}

		//Opening database and checking for errors.
		if (sqlite3_open_v2("dataBase.db", &db, SQLITE_OPEN_READWRITE, NULL) != SQLITE_OK) {
			sqlite3_close(db);
			std::string error = "Error opening database. ";
			error += sqlite3_errmsg(db);
			error += "\n";
			throw std::invalid_argument(error);
		}
		else {
			//Building query
			query = "SELECT total FROM saving WHERE sav_name LIKE '";
			query += savingsName + "'; ";

			//Making query and checking for error.
			if (sqlite3_prepare_v2(db, query.c_str(), -1, &qres, NULL) != SQLITE_OK) {
				sqlite3_finalize(qres);
				std::string error = "There was an error in savings goal query. ";
				error += sqlite3_errmsg(db);
				error += "\n";
				throw std::invalid_argument(error);
			}
			else {
				sqlite3_step(qres);//Step in.
				total = sqlite3_column_double(qres, 0);//Set total from result
				sqlite3_finalize(qres);//Close result.
			}
		}//End of main else.

		//Closing database.
		sqlite3_close(db);

		return total;
	}//End of getTotal
	void getSavingsList() const;

	//Mutators
	void deleteSavings(std::string name) throw(std::invalid_argument);
	void changeGoal(std::string name, double newGoal) throw(std::invalid_argument);
	void addSavings(std::string name) throw(std::invalid_argument);

};//End of class