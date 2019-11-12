#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../node.hpp"

TEST_CASE("Node")
{
	Node n(12);
	REQUIRE(12 == n.GetData());
	REQUIRE(nullptr == n.GetLeft());
	REQUIRE(nullptr == n.GetRight());

	Node* left = new Node(10);
	n.SetLeft(left);
	REQUIRE(left == n.GetLeft());

	Node* right = new Node(6);
	n.SetRight(right);
	REQUIRE(right == n.GetRight());

	delete left;
	delete right;
}

// Compile & run:
// make clean test
