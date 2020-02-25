#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount get_bal") {

	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);

}

TEST_CASE("Test BankAccount deposit") {

	BankAccount account(150);
	account.deposit(50);

	REQUIRE(account.get_balance() == 200);

	account.deposit(-50);
	REQUIRE(account.get_balance() == 200);
}

TEST_CASE("Test BankAccount withdraw") {

	BankAccount account(150);
	account.withdraw(50);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(-20);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(200);
	REQUIRE(account.get_balance() == 100);
}