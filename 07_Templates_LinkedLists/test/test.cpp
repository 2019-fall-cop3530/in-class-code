#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../node.hpp"
#include "../list.hpp"

TEST_CASE("Node")
{
	Node<int>* n = new Node<int>(12);
	REQUIRE(12 == n->GetData());

	REQUIRE(nullptr == n->GetNext());

	Node<int>* n2 = new Node<int>(7, n);
	REQUIRE(7 == n2->GetData());
	REQUIRE(n == n2->GetNext());
	REQUIRE(12 == n2->GetNext()->GetData());
}

TEST_CASE("List")
{
	List<int> l;
	l.InsertAtHead(4);
	REQUIRE(4 == l.GetFront()->GetData());

	l.InsertAtHead(6);
	REQUIRE(6 == l.GetFront()->GetData());

	REQUIRE(4 == l.GetFront()->GetNext()->GetData());

	l.DeleteFromHead();
	l.DeleteFromHead();
	l.DeleteFromHead();
	l.DeleteFromHead();
}

// Compile & run:
// make clean test
