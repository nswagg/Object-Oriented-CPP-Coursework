/* 
*  Nick Waggoner
*  Object-Oriented C++
*  Due 2-8-21
* 
* Description:
* Write a program that generates an array of 50 components. You will first 
* ask the user to enter 50 integers. At this point the user can either 
* 1) enter 50 integers manually or 2) paste these 50 integers below. 
* 
* Once the aforementioned 50 integers are entered, the program stores
* them into an array of 50 components. The program then determines and 
* outputs which numbers in the array are the sum of any two other array elements. 
* If an array element is the sum of two other array elements, then for this array 
* element, the program should output all such pairs.
* 
* Tags: arrays, array manipulation
*/

/*
   10 17 23 65 34 6 18 27 35 110 75 25 100 24 19 67 45 88 70 96 41 36 72 150 125 25 77
   200 90 166 139 55 31 8 29 119 126 137 34 62 135 121 108 197 45 35 24 1 16 43
   */
#include <iostream>

using namespace std;

const int LIST_SIZE = 50;

int main()
{
    int list[LIST_SIZE];

    cout << "Enter " << LIST_SIZE << " integers: ";
    for (int i = 0; i < LIST_SIZE; i++)
        cin >> list[i];
    cout << endl;

    for (int i = 0; i < LIST_SIZE; i++)
    {
        cout << "list[" << i << "] = " << list[i] << " is the sum of: ";
        for (int j = 0; j < LIST_SIZE; j++)
            for (int k = j + 1; k < LIST_SIZE; k++)
                if (list[i] == list[j] + list[k])
                    cout << "list[" << j << "], list[" << k << "]; ";
        cout << endl;
        cout << "----------------------" << endl;;
    }

    return 0;
}
