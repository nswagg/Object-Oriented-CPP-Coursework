/*
* Nick Waggoner
* Object-Oriented C++
* 04-04-2021
* 
* Tags: object class, access modifiers, string formatting, inheritance, abstraction
*/

#include <iostream>
#include <string>
using namespace std;

class PersonData {
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;
public:
    //Default Constructor
    PersonData() {}
    PersonData(string l, string f, string a, string c, string s, string z, string p) 
        : lastName(l), firstName(f), address(a), city(c), state(s), zip(z), phone(p){
        /*
        lastName
        firstName
        address
        city
        state
        zip
        phone
        */
    }
    //Accessors
    string getFirst(){
        return firstName;
    }
    string getLast() {
        return lastName;
    }
    string getCity() {
        return city;
    }
    string getAddress() {
        return address;
    }
    string getState() {
        return state;
    }
    string getZip() {
        return zip;
    }
    string getPhone() {
        return phone;
    }

};//PersonData

class CustomerData : public PersonData {
private:
    int customerNumber;
    bool mailingList;
public:
    //Default Constructor
    CustomerData(int num = 0, bool mail = true) {
        customerNumber = num;
        mailingList = mail;
    }
    CustomerData(string l, string f, string a, string c, string s, string z, string p, int num, bool mail)
        : PersonData(l, f, a, c, s, z, p), customerNumber(num), mailingList(mail) {

        customerNumber = num;
        mailingList = mail;
    }

    int getNumber() {
        return customerNumber;
    }
    bool onList() {
        return mailingList;
    }

    void printOut() {
        cout << "First Name: " << getFirst() << endl;
        cout << "Last Name : " << getLast() << endl;
        cout << "Address   : " << getAddress() << endl;
        cout << "City      : " << getCity() << endl;
        cout << "State     : " << getState()<< endl;
        cout << "ZIP       : " << getZip() << endl;
        cout << "Phone     : " << getPhone() << endl;
    }
};//CustomerData



int main()
{
    CustomerData Jimmy("Woo", "Jimmy", "123 University Way", "CO Springs", "Colorado", "80918", "719-255-1234", 0000, false);
    Jimmy.printOut();
}