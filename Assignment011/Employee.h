//FILE: "Employee.h"

//Specification file for the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee {
private:
	string name;	//Employee name
	string number;	//Employee number
	string hireDate;//Hire Date
	bool disabled;	//Is the worker disabled?

public:
	//Default Constructor
	Employee() {
		name = "";
		number = "";
		hireDate = "";
		disabled = false;
	}

	//Constructor
	Employee(string aName, string aNumber, string aDate, bool disability) {
		name = aName;
		number = aNumber;
		hireDate = aDate;
		disabled = disability;
	}

	//Mutators
	void setName(string n) {
		name = n;
	}

	void setNumber(string num) {
		number = num;
	}

	void setHireDate(string date) {
		hireDate = date;
	}

	void setDisability(bool dis) {
		disabled = dis;
	}

	//Accessors
	string getName() const {
		return name;
	}
	string getNumber() const {
		return number;
	}
	string getHireDate() const {
		return hireDate;
	}
	bool getDisability() const {
		return disabled;
	}
};

#endif // !EMPLOYEE_H
