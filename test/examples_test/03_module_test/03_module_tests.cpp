#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test switch menu function")
{
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(10) == "Invalid Option");
}

TEST_CASE("Test switch menu char function")
{
	REQUIRE(menu('z') == "Invalid Option");
	REQUIRE(menu('a') == "A");
	REQUIRE(menu('y') == "Invalid Option");
}
