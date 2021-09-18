/*
* Nick Waggoner
* Object-Oriented C++
*
* Tags: header files, object classes, include, user input, algebra
*/

#include "RoomCarpet.h"

#include <iomanip>
using std::setprecision;

#include <iostream>
using std::fixed;
using std::cin;
using std::cout;

int main()
{
	double price = 0.0;
	int choice = 1;

	FeetInches width, length;

	while (toupper(choice) != 0)
	{
		cout << "Please enter the width of the room: " << endl;
		cin >> width;
		cout << "Please enter the length of the room: " << endl;
		cin >> length;

		RoomDimension dim(width, length);

		cout << "Please enter the price per square foot: $" << endl;
		cin >> price;

		RoomCarpet purchase(dim, price);

		cout << setprecision(2) << fixed;
		cout << "\nThe total price of your "
			<< width << " by " << length << " carpet is $"
			<< purchase.getTotalCost() << "\n" << endl;

		cout << "Do you wish to calculate the price for another room? ";
		cin >> choice;

		while (toupper(choice) != 1 && toupper(choice) != 0) {
			cout << "Do you wish to calculate the price for another room? ";
			cin >> choice;
		}

		if (toupper(choice) == 0) {

		}
		cout << "\n";
	}

	cin.get();
	cin.ignore();
	return  0;
}//main