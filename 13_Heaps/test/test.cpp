#define CATCH_CONFIG_MAIN

#include "../../test/catch/catch.hpp"
#include "../heap.hpp"

TEST_CASE("Relative pointers")
{
	// calculat parent
	Heap h;
	REQUIRE(2 == h.GetParentID (6));
	REQUIRE(2 == h.GetParentID (5));
	// right child
	// left child
}

// Compile & run:
// make clean test
