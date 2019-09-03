#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../main.cpp"

TEST_CASE("First bundle of tests")
{
	REQUIRE(PrintNumberString() == "1234567891011121314151617181920");
}

// Compile & run:
// make clean test
