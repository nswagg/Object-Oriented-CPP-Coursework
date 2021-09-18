/* 
* Nick Waggoner
* Object-Oriented C++
* 2-28-2021
* 
* Tags: object class, access modifiers
*/

#include <iostream>
using namespace std;

class Car
{
    //Access Modifier
public:

    //Data Members:
    int yearModel;  //holds car's year model
    string make;    //holds make of car
    int speed;      //holds car's current speed

    //Member Functions
    void nullCon() {}

    void Constructor(int yrModel, string type)
    {
        yearModel = yrModel;
        make = type;
        speed = 0;
    }

    int getYear()
    {
        return yearModel;
    }

    string getMake()
    {
        return make;
    }

    int getSpeed()
    {
        return speed;
    }

    void accelerate()
    {
        speed += 5;
    }

    void brake()
    {
        speed -= 5;
    }

};//Car

int main()
{
    Car newCar;
    newCar.Constructor(2009, "Honda");
    int count;

    for (count = 0; count < 5; count++)
    {
        newCar.accelerate();
        cout << newCar.getSpeed() << endl;
    }

    for (count = 0; count < 5; count++)
    {
        newCar.brake();
        cout << newCar.getSpeed() << endl;
    }

    cout << "Vroom...";
}

