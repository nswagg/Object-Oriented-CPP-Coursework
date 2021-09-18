/* 
* Nick Waggoner
* Object-Oriented C++
* Due 2-15-21
* 
* Description:
* Write a program that simultates inventory bins in a warehouse. 
* Each bin holds a number of the same type of parts. The program
* should use a structure that keeps the following data:
*       Description of the part kept in the bin
*       Number of parts in the bin
* The program should have an array of 10 bins
* 
* (initialized data listed in textbook pg 663)
* 
* When the program runs, it should repeat a loop that performs
* the following steps:
*   The user should see a list of what each bin holds and how many
*   parts are in the bin. The user can choose to either quit or 
*   select a bin. When the bin is selected, the user can either
*   add parts to it  or remove parts from it. The loop then repeats,
*   showing the updated bin data on screen.
* 
* Input Validation:
*   No bin can hold more than 30 parts, so don't let the usre add more
*   than a bin can hold. Also, don't accept negative values for the 
*   number of parts being added or removed.
* 
* Tags: struct, objects, list, object manipulation, input validation, pointers
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

const int SIZE = 10;

//define struct
struct bin
{
    string name = ""; //default
    int parts = 0; //default 
}valve, bearing, bushing, coupling, flange, gear, housing, gripper, cable, rod;

//Function prototypes
void printHeader(bin[]);
void AddParts(bin*);
void RemoveParts(bin*);

int main()
{
    int exit = -1;
    int input = NULL;
    bin inventory[SIZE];  //Creates an array of 10 bins

    //Initialize bins with data
    valve.name = "Valve";
    valve.parts = 10;
    inventory[0] = valve;
    bearing.name = "Bearing";
    bearing.parts = 5;
    inventory[1] = bearing;
    bushing.name = "Bushing";
    bushing.parts = 15;
    inventory[2] = bushing;
    coupling.name = "Coupling";
    coupling.parts = 21;
    inventory[3] = coupling;
    flange.name = "Flange";
    flange.parts = 7;
    inventory[4] = flange;
    gear.name = "Gear";
    gear.parts = 5;
    inventory[5] = gear;
    housing.name = "Housing";
    housing.parts = 5;
    inventory[6] = housing;
    gripper.name = "Gripper";
    gripper.parts = 25;
    inventory[7] = gripper;
    cable.name = "Cable";
    cable.parts = 18;
    inventory[8] = cable;
    rod.name = "Rod";
    rod.parts = 12;
    inventory[9] = rod;

    while (exit != 0)
    {
        //Loops the program until user is done
        cout << "\n";
        printHeader(inventory);
        cout << "\n\nWhich bin would you like to visit? (top bin - valve - is 1; rod is 10. 0 to quit)";
        cin >> input;

        if (input == 0)
        {
            exit = 0;
        }
        else if (input > 0 && input <=10)
        {
            cout << "Would you like to add or remove parts? (1 for add; 2 for remove; 0 for menu)";
            int temp;
            cin >> temp;

            if (temp == 1)
            {
                AddParts(&inventory[temp - 1]);
            }
            else if (temp == 2)
            {
                RemoveParts(&inventory[temp - 1]);
            }
            else if (temp == 0)
            { }
            else
            {
                cout << "Invalid input. Please try again.\n\n";
            }
        }
        else
        {
            cout << "Invalid input. Please try again.\n\n";
        }
    }
}

void AddParts(bin* inventory)
{
    if (inventory->parts < 30)
    {
        inventory->parts += 1;
    }
    else
    {
        cout << "A bin cannot have more than 30 parts.\n";
    }
}

void RemoveParts(bin* inventory)
{
    if (inventory->parts > 0)
    {
        inventory->parts -= 1;
    }
    else
    {
        cout << "\n\nA bin cannot have less than 0 parts.\n\n";
    }
}

void printHeader(bin* inventory)
{
    cout << "________________________________________________________";
    cout << "\nPart Description\t  Number of Parts in the Bin";
    cout << "\n________________________________________________________\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << (&inventory[i])->name << left<<  (&inventory[i])->parts << setw(25) << endl;
    }
    cout << "________________________________________________________";
}