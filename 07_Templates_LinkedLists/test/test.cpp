#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../node.hpp"

TEST_CASE("Node")
{
	Node* n = new Node(12);
	//REQUIRE(12 == n->GetData());
	// pointer
}

// Compile & run:
// make clean test
