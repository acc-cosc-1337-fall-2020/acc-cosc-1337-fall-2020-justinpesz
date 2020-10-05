#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "vec.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("verify sum of squares function")
{
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("verify index fuction")
{
	std::string str = "john";

	loop_string_w_index(str);
	
	REQUIRE(str == "zzzz");	
}