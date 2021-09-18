FILE: "CustomerData.h"

//CustomerData class
#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include <string>

class CustomerData : public PersonData {
private: 
	int customerNumber;
	bool mailingList;

public:
	//Default Constructor
	CustomerData() : PersonData() {
		customerNumber = 0;
		mailingList = false;
	}
	//Constructor
	CustomerData(string ln, string fn, string addr, string c, string s, string z, int cn, bool ml,) :
	PersonData(ln, fn, addr, c, s, z) {
		customerNumber = cn;
		mailingList = ml;
	}

	//Mutator
	void setCustomerNumber(int cn) {
		customerNumber = cn;
	}
	
	void setMailingList(bool ml) {
		mailingList = ml;
	}

	//Accessor Functions
	int getCustomerNumber() {
		return customerNumber;
	}
	bool getMailingList() {
		return mailingList;
	}
};

#endif