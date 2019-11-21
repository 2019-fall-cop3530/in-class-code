#define CATCH_CONFIG_MAIN

#include "../../test/catch/catch.hpp"
#include "../heap.hpp"

TEST_CASE("Relative pointers")
{
	Heap h;
	REQUIRE(2 == h.GetParentID (6));
	REQUIRE(2 == h.GetParentID (5));

	REQUIRE(5 == h.GetLeftChild (2));
	REQUIRE(1 == h.GetLeftChild (0));
}

TEST_CASE ("Swap")
{
	Heap h;
	// insert dummy data
	// run swap
	//compare
	//REQUIRE();
}

TEST_CASE ("Insert")
{
	Heap h;
	h.Insert(12);
	h.Insert(21);
	h.Insert(2);
	h.Insert(14);

	REQUIRE(2 == h.Peek());
}
