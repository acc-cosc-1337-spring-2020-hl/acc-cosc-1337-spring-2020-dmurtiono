#include "bank_account.h"
#include <iostream>
#include <vector>

using std::cout; using std::vector;


int main()
{
	int balance;

	BankAccount a(60);
	cout << a.get_balance() << "\n";

	vector<BankAccount> acts{BankAccount (100), BankAccount (200), BankAccount(300)};

	for (auto acc : acts)
	{
		cout << acc.get_balance() << "\n";

	}

	BankAccount account(500);
	balance = account.get_balance();




	cout << "Balance: " << balance;

	return 0;
}