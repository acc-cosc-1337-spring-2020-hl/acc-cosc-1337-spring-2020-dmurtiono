//bank_account.cpp
#include "bank_account.h"

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance += amount;
	}
	else
	{
		throw InvalidAmount("Cannot deposit negative amount.")
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > 0 && balance - amount >= 0)
	{
		balance -= amount;
	}
	else if ( balance - amount < 0 )
	{
		InvalidAmount("Insufficient funds.");
	}
	else
	{
		InvalidAmount("Cannot withdraw a negative amount.")
	}
}

void BankAccount::open(int amount)
{
	if (amount >= min_open_bal & balance == 0)
	{
		balance += amount;
	}
	else if (balance > 0)
	{
		throw InvalidAmount("Account already open.");
	}
	else
	{
		throw InvalidAmount("A deposit of $25 is required.");
	}
}
