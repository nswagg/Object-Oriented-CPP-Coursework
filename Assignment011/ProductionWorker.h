//FILE: "ProductionWorker.h"

// Specification for the ProductionWorker class
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "Employee.h"
#include <string>

class ProductionWorker : public Employee {
private:
	int shift;		//The worker's shift
	double payRate;	//The worker's hourly pay rate

public:
	//Default
	ProductionWorker() : Employee() {
		shift = 0;
		payRate = 0.0;
	}
	//Constructor
	ProductionWorker(string aName, string aNumber, string aDate, bool aDisability, int aShift, double aPayRate) : Employee(aName, aNumber, aDate, aDisability) {
		shift = aShift;
		payRate = aPayRate;
	}

	//Mutators
	void setShift(int s) {
		shift = s;
	}
	
	void setPayRate(double r) {
		payRate = r;
	}

	//Accessors
	int getShiftNumber() const {
		return shift;
	}

	string getShiftName() const {
		if (shift == 1) {
			return "Day";
		}
		else if (shift == 2) {
			return "Night";
		}
		else {
			return "Invalid";
		}
	}

	double getPayRate() const {
		return payRate;
	}
};

#endif // !PRODUCTION_WORKER_H
