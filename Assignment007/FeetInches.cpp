//Nick Waggoner
/*Note: The FeetInches C++ source file was made available
* at time of creating WaggonerN14.13
* I cannot take credit for FeetInches, its header, or the other
* header files attached to make 14.13 run.
* I implemented the FeetInches simplify() and multiply() functions
*/

#include "FeetInches.h"

#include <cstdlib>

#include <iostream>
using std::cout;

/* **********************************************************
			FeetInches::simplify()
	This function checks for values in the inches member 
	greater than twelve or less than zero. If such a value is
	found, the numbers in feet and inches are adjusted to
	conform to a standard feet & inches expression.

	The standard library function abs() is used to get the
	absolute value of the inches member. The abs() function
	requires to #include <cstdlib>.
   ********************************************************** */

void FeetInches::simplify()
{
	if (inches >= 12)
	{
		feet += (inches / 12);
		inches = inches % 12;
	}
	else if (inches < 0)
	{
		feet -= ((abs(inches) / 12) + 1);
		inches = 12 - (abs(inches) % 12);
	}
}


FeetInches FeetInches::operator + (const FeetInches &right)
{
	FeetInches temp;

	temp.inches = inches + right.inches;
	temp.feet = feet + right.feet;
	temp.simplify();

	return temp;
}


FeetInches FeetInches::operator - (const FeetInches &right)
{
	FeetInches temp;

	temp.inches = inches - right.inches;
	temp.feet = feet - right.feet;
	temp.simplify();

	return temp;
}


FeetInches FeetInches::operator++()
{
	++inches;
	simplify();

	return *this;
}


FeetInches FeetInches::operator++(int)
{
	FeetInches temp(feet, inches);

	inches++;
	simplify();

	return temp;
}


bool FeetInches::operator > (const FeetInches &right)
{
	bool status;

	if (feet > right.feet)
	{
		status = true;
	}
	else if (feet == right.feet && inches > right.inches)
	{
		status = true;
	}
	else
	{
		status = false;
	}

	return status;
}


bool FeetInches::operator < (const FeetInches &right)
{
	bool status;

	if (feet < right.feet)
	{
		status = true;
	}
	else if (feet == right.feet && inches < right.inches)
	{
		status = true;
	}
	else
	{
		status = false;
	}

	return status;
}


bool FeetInches::operator == (const FeetInches &right)
{
	bool status;

	if (feet == right.feet && inches == right.inches)
	{
		status = true;
	}
	else
	{
		status = false;
	}

	return status;
}


bool FeetInches::operator >= (const FeetInches &right)
{
	bool status;

	if (feet >= right.feet)
	{
		return true;
	}
	else if (feet == right.feet && inches >= right.inches)
	{
		status = true;
	}
	else
	{
		status = false;
	}

	return status;
}


bool FeetInches::operator <= (const FeetInches &right)
{
	bool status;

	if (feet <= right.feet)
	{
		status = true;
	}
	else if (feet == right.feet && inches <= right.inches)
	{
		status = true;
	}
	else
	{
		status = false;
	}

	return status;
}


bool FeetInches::operator != (const FeetInches &right)
{
	bool status;

	if (feet != right.feet)
	{
		status = true;
	}
	else if (feet == right.feet && inches != right.inches)
	{
		status = true;
	}
	else
	{
		status = false;
	}

	return status;
}

/* **********************************************************
			FeetInches::FeetInches multiply() : const obj &
	This function multiplies two FeetInches objects. The feet
	and inches attributes are multiplied by the calling feet
	and inches object's feet and inches attributes, and a 
	FeetInches object holding the result is returned.
	********************************************************** */

FeetInches FeetInches::multiply(const FeetInches &right)
{
	FeetInches temp;

	temp.inches = ((feet * 12 + inches) * (right.feet * 12 + right.inches));
	temp.inches /= 12;
	temp.simplify();

	return temp;
}


FeetInches::operator double()
{
	double temp = feet;

	temp += (inches / 12.0);
	return temp;
}


ostream &operator << (ostream &strm, const FeetInches &obj)
{
	strm << obj.feet << " feet " << obj.inches << " inches";

	return strm;
}


istream &operator >> (istream &strm, FeetInches &obj)
{
	// Prompt the user for the feet
	cout << "Feet: ";
	strm >> obj.feet;

	// Prompt the user for the inches
	cout << "Inches: ";
	strm >> obj.inches;

	// Normalize the values
	obj.simplify();

	return strm;
}