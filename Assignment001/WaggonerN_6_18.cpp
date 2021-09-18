/*Nick Waggoner
* Object-Oriented C++
* Due 1-25-2021
*
* Description:
* A painting company has determined that for every 110 square feet of wall space,
* 1 gallon of paint and 8 hours of labor will be required. The company charges $25.00
* per hour for labor. Write a modular program that allows the user to enter the number
* of rooms that are to be painted and the price of the paint per gallon. It should also ask
* for the square feet of wall space in each room. It should then display the following data:
*
* -The number of gallons of paint required
* -The hours of labor required
* -The cost of the paint
* -The labor charges
* -The total cost of the paint job
*
* Note:
* Input Validation: The program should not accept a value of less than 1 for the number of rooms.
* It should not accept a value of less than $10.00 for the price of paint. Do not accept a negative value
* for square footage of wall space.
* 
* Tags: input validation, algebra, srp functions, cmath
*/

#include <iostream>
using namespace std;
#include <cmath> //used to round up. Paint gallons can't exactly be rounded down

int main()
{
    int rooms;              //to hold the number of rooms
    int square_feet = 0;    //adds togther the entire wall space of every room
    int check;
    double paint_price;     //to hold the price of paint per gallon

    //Collects number of rooms
    cout << "Welcome to Pete's Painting LLC!\n\nPlease enter the total number of rooms to be painted (integer) >> ";
    cin >> rooms;
    while (rooms < 1) {
        cout << "Need at least one room. Please try again >> ";
        cin >> rooms;
    }

    //Collects price of paint per gallon
    cout << "Please enter the price of paint per gallon >> ";
    cin >> paint_price;
    while (paint_price < 10.00) {
        cout << "The price must be at least $10.00. Please try again >> ";
        cin >> paint_price;
    }

    //Collects total square footage
    for (int count = 1; count <= rooms; count++) {
        cout << "How many square feet for Room " << count << " >> ";
        cin >> check;
        while (check < 0) {
            cout << "The square footage cannot be negative. Please try again >> ";
            cin >> check;
        }
        square_feet += check;
    }

/*
*******************************************************************************************************************
*/
//Calculations

    double gals, hours, charge;

    int total = (square_feet - (square_feet % 110)) / 110; //This will give us a number to multiply to calculate our pricing
    gals = total * 1; //number of gallons

    if ((square_feet % 110) != 0) {
        gals++; //to account for the fraction of a gallon. Wouldn’t purchase a fraction of a gallon.
    }

    hours = ((double)square_feet / 110) * 8;    //number of hours needed

    double paint = gals * paint_price;
    double labor = hours * 25.00;
    charge = labor + paint;

/*
*******************************************************************************************************************
*/
    //Output
    cout << "\nNumber of gallons required >> " << gals;
    cout << "\nHours of labor required >> " << hours;
    cout << "\nCost of paint >> " << paint;
    cout << "\nLabor charges >> " << labor;
    cout << "\nTotal cost of the job >> " << charge << "\n";
}