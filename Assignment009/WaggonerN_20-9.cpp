/* 
* Nick Waggoner
* Object-Oriented C++
* 4-25-2021
* 
* Tags: string manipulation, <string>
*/

#include <iostream>
#include <string>
using namespace std;

//**************************************************************
   // Function to reverse a string using pointer
void reverseStr(string& str) {
    int n = str.length();

    //Switches characters (treating it as array) from each bound.
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);   //
}
//**************************************************************

//Driver Function
int main() {
    string str = "Your mother was a hamster";
    cout << "This is the main driver to swap around a string.\nPlease insert a string to be flipped and returned: ";
    getline(cin, str);

    //cin >> str;
    cout << "You entered: " << str << endl;

    reverseStr(str);

    cout << "\n\nReversed String:\n" << str << endl;

    return 0;
}