#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
//#include "../file1.hpp"

TEST_CASE("First bundle of tests")
{
	REQUIRE(true == true);
}

// Compile & run:
// make clean test
