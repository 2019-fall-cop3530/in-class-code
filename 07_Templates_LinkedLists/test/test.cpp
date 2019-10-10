#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../node.hpp"
#include "../list.hpp"

TEST_CASE("Node")
{
	Node* n = new Node(12);
	REQUIRE(12 == n->GetData());

	REQUIRE(nullptr == n->GetNext());

	Node* n2 = new Node(7, n);
	REQUIRE(7 == n2->GetData());
	REQUIRE(n == n2->GetNext());
	REQUIRE(12 == n2->GetNext()->GetData());
}

TEST_CASE("List")
{
	List l;
	l.InsertAtHead(4);
}

// Compile & run:
// make clean test
