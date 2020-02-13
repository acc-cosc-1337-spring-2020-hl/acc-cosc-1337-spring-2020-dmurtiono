#include <iostream>
#include "value_ref.h"

using std::cout;

int main() 
{
	int num = 5;
	cout << "Address for num is " << &num << "\n";

	int &num_ref = num;
	num_ref = 10;

	cout << "Num is: " << num;

	return 0;
}
