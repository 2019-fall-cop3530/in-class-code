#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../main.cpp"
#include "../student.hpp"

TEST_CASE("First bundle of tests")
{
	REQUIRE(PrintNumberString() == "1234567891011121314151617181920");
}

TEST_CASE("Student test")
{
	Student s1("Alan", "Turing", 3.87);
	REQUIRE("Turing, Alan: 3.87" == s1.ToString());
}

// Compile & run:
// make clean test
