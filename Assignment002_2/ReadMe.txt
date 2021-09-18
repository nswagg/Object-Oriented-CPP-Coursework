HWK For DAY 02 Arrays. Goes with 7.5*, and 7.12

TBD DAY01* (will be graded)

You are to write a program that generates an array of 50 components. 
You will first ask the user to enter 50 integers. At this point the user can either 
1) enter 50 integers manually or 
2) paste these 50 integers below. 

You may want to paste them into your code as a comment for easy access.

/*
10 17 23 65 34 6 18 27 35 110 75 25 100 24 19 67 45 88 70 96 41 36 72 
150 125 25 77 200 90 166 139 55 31 8 29 119 126 137 34 62 135 121 108 197 45 35 24 1 16 43
*/

Once the aforementioned 50 integers are entered, your program must store 
them into the array of 50 components. Your program then determines and 
outputs which numbers in the array are the sum of any two other array elements. 
If an array element is the sum of two other array elements, then for this array 
element, the program should output all such pairs. For example, the output 
for the first three elements is as follows.

Enter 50 integers: 10 17 23 65 34 6 18 27 35 110 75 25 100 24 19 67 45 88 70 96 41 36 72 150 125 25 77 200 90 166 139 55 31 8 29 119 126 137 34 62 135 121 108 197 45 35 24 1 16 43

list[0] = 10 is the sum of:

----------------------

list[1] = 17 is the sum of: list[47], list[48];

----------------------

list[2] = 23 is the sum of: list[1], list[5];

---------------------- 