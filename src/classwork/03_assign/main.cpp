//write includes statements
#include <iostream>
#include "loops.h"

//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int go = 1;
	do
	{
		int num, fac;

		cout << "Enter a number: ";
		cin >> num;

		fac = factorial(num);
		cout << num << "! = " << fac << "\n";

		cout << "Would you like to continue? (1 to continue) ";
		cin >> go;

	} while (go == 1);

	return 0;
}