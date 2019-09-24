#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../binary_search.hpp"

TEST_CASE("Binary search")
{
	int foo[] = {1, 2, 3, 5, 7, 12, 20, 32, 1212};
	int length = sizeof(foo) / sizeof(int);

	REQUIRE(-1 == BinarySearch::Find(foo, length, -4)); 
	for (int i = 0; i < length; ++i)
	{
		REQUIRE(i == BinarySearch::Find(foo, length, foo[i])); 
	}
}

// Compile & run:
// make clean test
