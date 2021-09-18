FILE: "PersonData.h"

//PersonData class
#ifndef PERSONDATA_H
#define PERSONDATA_H
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
    PersonData() {
        lastName = "";
        firstName = "";
        address = "";
        city = "";
        state = "";
        zip = "";
    }
    //Constructor
    PersonData(string l, string f, string a, string c, string s, string z, string p)
        : lastName(l), firstName(f), address(a), city(c), state(s), zip(z), phone(p) {
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

    //Mutators
    void setFirst(string temp)
    {
        firstName = temp;
    }
    void setLast(string temp)
    {
        lastName = temp;
    }
    void setCity(string temp)
    {
        city = temp;
    }
    void setAddress(string temp)
    {
        address = temp;
    }
    void setState(string temp)
    {
        state = temp;
    }
    void setZip(string temp)
    {
        zip = temp;
    }
    void setPhone(string temp)
    {
        phone = temp;
    }

    //Accessors
    string getFirst()
    {
        return firstName;
    }
    string getLast()
    {
        return lastName;
    }
    string getCity()
    {
        return city;
    }
    string getAddress()
    {
        return address;
    }
    string getState()
    {
        return state;
    }
    string getZip()
    {
        return zip;
    }
    string getPhone()
    {
        return phone;
    }
}