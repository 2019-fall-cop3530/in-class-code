#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../node.hpp"

TEST_CASE("Node")
{
	Node n(12);
	REQUIRE(12 == n.GetData());
//	REQUIRE(nullptr == n.GetLeft());
//	REQUIRE(nullptr == n.GetRight());
}

// Compile & run:
// make clean test
