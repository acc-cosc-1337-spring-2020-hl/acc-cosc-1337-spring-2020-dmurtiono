#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Tests for gross_pay function") {
	REQUIRE(gross_pay(10, 15) == 150);
	REQUIRE(gross_pay(5, 20) == 100);
	REQUIRE(gross_pay(20, 10) == 200);
	REQUIRE(gross_pay(41, 10) == 415);
	REQUIRE(gross_pay(50, 20) == 1100);
	REQUIRE(gross_pay(11.8, 12.25) == 144.55);
}
