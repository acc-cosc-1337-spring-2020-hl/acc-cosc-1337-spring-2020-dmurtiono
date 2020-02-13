#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test factorial function") {
	REQUIRE(factorial(5) == 120);
	REQUIRE(factorial(10) == 3628800);
	REQUIRE(factorial(7) == 5040);
	REQUIRE(factorial(0) == 1);
	REQUIRE(factorial(-3) == -6);
}