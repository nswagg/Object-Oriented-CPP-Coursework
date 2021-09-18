/* 
* Nick Waggoner
* CS 3060 002
* Due 2/8/2021
* 
* Description: 
* In statistics, the mode of a set of values is the value that occurs most ofter or with the
* greatest frequency. Write a function that accepts that acceps as arguments the following:
* A) An array of integers
* B) An integer that indicates the number of elements in the array
* The function should determine the mode of the array. That is, it should determine
* which value in the array occurs most often. The mode is the value the function
* should return. If the array has no mode (none of the values occur more than once),
* the function should return -1. (Assume the array will always contain nonnegative values.)
* 
* Demonstrate your pointer prowess by using pointer notation instead of array notation 
* in this function.
* 
* Tags: pointers, arrays, array manipulation
*/

#include <iostream>
using namespace std;

//Function Prototypes
int mode(int[], int); //array of ints, size of array

/*
* Main Function used for testing
* 
int main()
{
    int array[] = { 1,2,3,3 };
    int size = 4;
    cout << "Mode :: " << mode(array, size);
}
*/


/*
* The mode function takes an array of integers as an argument
* with a size of array parameter and determines which value in
* the array most often after copying and sorting the data into
* a second array.
*/
int mode(int *array, int size)
{
    int maxValue = 0;
    int maxCount = 0, i, j;

    for (i = 0; i < size; i++)
    {
        int count = 0;
        for (j = 0; j < size; j++)
        {
            if (*(array + j) == *(array + i)) //this is the same as array[j] == array[i]
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count; 
            maxValue = *(array + i); //this pointer is the same as array[i]
        }
    }
    if (maxCount < 2)
    {
        maxValue = -1; //-1 if no mode
    }

    return maxValue;
} 