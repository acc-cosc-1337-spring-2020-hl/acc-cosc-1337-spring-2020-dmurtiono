#include "loops.h"

/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int factorial(int num) 
{
	int product = 1;
	bool neg = false;

	if (num < 0)
	{
		num *= -1;
		neg = true;
	}

	for (int i = num; i > 0; --i)
	{
		product *= i;
	}

	if (neg)
	{
		product *= -1;
	}

	return product;
}