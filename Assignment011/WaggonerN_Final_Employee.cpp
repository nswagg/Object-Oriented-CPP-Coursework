/*
* Nick Waggoner
* Object-Oriented C++
* 5-25-2021
* Employee and ProductionWorker classes
* 
* A factory you recently wrote code for has received a Federal grant 
* that compensates the pay of disabled folk working at the factory. 
* The point is to encourage factories to hire those that are disabled 
* and give them an opportunity to work. Design a class named Employee. 
* The class should keep the following information in
*    • Employee name
*    • Employee number
*    • Hire date
*    • Disabled (yes or no)
* Write one or more constructors and the appropriate accessor and 
* mutator functions for the class. Next, write a class named 
* ProductionWorker that is derived from the Employee class. The ProductionWorker 
* class should have member variables to hold the following information:
*   • Shift (an integer)
*   • Hourly pay rate (a double )
* The workday is divided into two shifts: day and night. The shift 
* variable will hold an integer value representing the shift that the 
* employee works. The day shift is shift 1, and the night shift is 
* shift 2. Write one or more constructors and the appropriate accessor and
* mutator functions for the class. Demonstrate the classes by writing a
* program that uses a ProductionWorker object.
* 
* Tags: header files, object classes, set precision, string manipulation
*/

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
using namespace std;

//Function Prototype
void displayInfo(ProductionWorker);

int main() {
    ProductionWorker SallyMay("Sally May", "456", "4/8/2016", false, 2, 18.00);
    displayInfo(SallyMay);

    return 0;
}

//DisplayInfo
void displayInfo(ProductionWorker w) {
    cout << setprecision(2) << fixed << showpoint;
    cout << "Name: " << w.getName() << endl;
    cout << "Employee Number: " << w.getNumber() << endl;
    cout << "Hire Dare: " << w.getHireDate() << endl;
    cout << "Shift: " << w.getShiftName() << endl;
    cout << "Shift Number: " << w.getShiftNumber() << endl;
    cout << "Pay Rate: " << w.getPayRate() << endl;
}