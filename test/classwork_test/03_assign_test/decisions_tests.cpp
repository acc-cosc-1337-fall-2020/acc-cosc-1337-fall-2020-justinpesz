#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get letter grade using if")
{
	REQUIRE(get_letter_grade_using_if(95) == "A");
	REQUIRE(get_letter_grade_using_if(85) == "B");
	REQUIRE(get_letter_grade_using_if(75) == "C");
	REQUIRE(get_letter_grade_using_if(65) == "D");
	REQUIRE(get_letter_grade_using_if(50) == "F");
	REQUIRE(get_letter_grade_using_if(101) == "");
	REQUIRE(get_letter_grade_using_if(-1) == "");
}

TEST_CASE("Verify get letter grad using switch")
{
	REQUIRE(get_letter_grade_using_switch(1) == "A");
	REQUIRE(get_letter_grade_using_switch(2) == "B");
	REQUIRE(get_letter_grade_using_switch(3) == "C");
	REQUIRE(get_letter_grade_using_switch(4) == "D");
	REQUIRE(get_letter_grade_using_switch(5) == "F");	
	REQUIRE(get_letter_grade_using_switch(6) == "");
}