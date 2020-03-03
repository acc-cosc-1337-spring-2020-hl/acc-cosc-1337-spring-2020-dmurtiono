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

TEST_CASE("Test BankAccount Default Constructor") {

	BankAccount account;

	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test Default constructor open account") {

	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.open(25);
	REQUIRE(account.get_balance() == 25);
}

TEST_CASE("Test account already open")
{
	BankAccount account(50);
	REQUIRE_THROWS_AS(account.open(25), InvalidAmount);
}

TEST_CASE("Test default constructor invalid open amount")
{
	BankAccount account;
	REQUIRE_THROWS_AS(account.open(24), InvalidAmount);
}