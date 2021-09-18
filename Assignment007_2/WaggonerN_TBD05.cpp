/*
* Nick Waggoner
* Object-Oriented C++
* Due 3-29-2021
* 
* You have a business that ships liquids in cylindrically shaped containers.
* Your shipping charges are a function of the amount of the liquid in a container.
* Assume each is filled to the brim and that you also offer the option to paint the
* outside of the container for an additional cost. Write a program that:
* Asks the user to enter 1) the radius of the base and the height in feet of the
* container, 2) the shipping cost per liter, 3) the paint cost per square foot.
* 
* For your output, show the shipping cost and the cost of painting. Your program 
* will use the class cylinderType given to you on canvas to store the radius and 
* height of the container. Use 1 cubic feet is 28.3168 liters or 1 liter is 0.353146667 
* cubic feet.)
* 
* Tags: <cmath>, object class, inheritance, input validation, preconditions
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//circleType.h
class circleType
{
private:
    double radius;
public:
    circleType(double r = 0) {
        //Constructor with a default parameter.
        //Radius is set according to the parameter.
        //The default value of the radius is 0.0;
        //Postcondition: radius = r;
        //cout << "Please set the radius: ";
        //cin >> r;
        setRadius(r);
    }

    void setRadius(double r) {
        //Function to set the radius.
        radius = r;
    }

    double getRadius() {
        //Function to return the radius.
        return radius;
    }
    double area() {
        //Function to return the area of a circle.
        //Postcondition: Area is calculated and returned.
        double temp = 3.1416 * radius * radius;
        return temp;
    }

    double circumference() {
        //Function to return the circumference of a circle.
        //Postcondition: Circumference is calculated and returned.
        double d = radius * 2;
        double temp = d * 3.1416;
        return temp;
    }

    void print() {}
};

//cylinderType.h
class cylinderType : public circleType
{
private:
    double height;
public:
    cylinderType() {}
    /*
    cylinderType(double h, double r) {
        setHeight(h);
        setRadius(r);
    }
    */
    void setHeight(double h) {
        height = h;
    }

    double getHeight() {
        return height;
    }
    
    //class operator functions
    double volume() {
        double r2 = getRadius();
        r2 = r2 * r2;                       //Optimized versus calling function twice.
        double v = 3.1416 * r2 * height;    //V = PI * r^2 * h (volume of right cylinder
        return v;
    }
    
    double surfaceArea() {
        //returns surface area
        double r = getRadius();
        double a = 2 * 3.1416 * r * (height + r); //A = 2*PI**r*h + 2*PI*r^2
        return a;
    }
};//cylinder

double shippingCost(double cubicFT, double cost) {
    double liters = cubicFT * 28.3168;  //The conversion rate: 1 cubic foot is 28.3168 liters
    liters = liters * cost;             //finds price for number of liters
    return liters;
}//shippingCost


double paintingCost(double surfaceArea, double paint) {
    double cost = surfaceArea * paint;
    return cost;
}//paintingCost

double validate(double temp) {
    while (temp <= 0) {
        cout << "ERROR: Invalid value\nTry again." << endl;
        cin >> temp;
    }
    return temp;
}//validate

int main() {
    //Variables
    cylinderType container;
    double radius;
    double height;
    double shipCost;
    double paintCost;

    //User input
    cout << "Please enter the radius of the base of the cylindrical containter >> " << endl;
    cin >> radius;
    container.setRadius(validate(radius)); //sets radius
    cout << "Please enter the height of the cylindrical containter >> " << endl;
    cin >> height;
    container.setHeight(validate(height)); //sets height

    cout << "Please enter the shipping cost per liter of fluid >> " << endl;
    cin >> shipCost;
    shipCost = validate(shipCost);
    cout << "Please enter the paint cost per square foot >> " << endl;
    cin >> paintCost;
    paintCost = validate(paintCost);

    double temp = container.volume();
    double shipping = shippingCost(temp, shipCost);
    temp = container.surfaceArea();
    double painting = paintingCost(temp, paintCost);

    cout << "The shipping cost is $" << fixed << setprecision(2) << shipping << endl;
    cout << "The painting cost is $" << fixed << setprecision(2) << painting << endl;
    return 0;
}//main
