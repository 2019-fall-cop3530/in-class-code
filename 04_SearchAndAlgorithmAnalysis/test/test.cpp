#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../linear_search.hpp"
#include "../binary_search.hpp"

TEST_CASE("Linear search")
{
	long long foo[] = {1, 2, 3, 5, 7, 12, 20, 32, 1212};
	REQUIRE(4 == LinearSearch::Find(foo, 9, 7)); 
	REQUIRE(-1 == LinearSearch::Find(foo, 9, -4)); 
}

TEST_CASE("Binary search")
{
	long long foo[] = {1, 2, 3, 5, 7, 12, 20, 32, 1212};
	REQUIRE(4 == BinarySearch::Find(foo, 9, 7)); 
	REQUIRE(8 == BinarySearch::Find(foo, 9, 1212)); 
	REQUIRE(-1 == BinarySearch::Find(foo, 9, -4)); 
}

// Compile & run:
// make clean test
