#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.

double gross_pay(double hours, double hourly_rate)
{
	if (hours > 40) 
	{
		double overtime = hours - 40;
		hours -= overtime;

		hours += overtime * 1.5;
	}

	double gross = hours * hourly_rate;

	return gross;
}
