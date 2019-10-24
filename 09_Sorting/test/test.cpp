#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../selection_sort.hpp"
#include "../merge_sort.hpp"

#include<vector>

TEST_CASE("Selection")
{
	std::vector<int> foo = {1, 32, 96, -12, 0, 32, 120, 14};
	std::vector<int> sortedFoo = {-12, 0, 1, 14, 32, 32, 96, 120};

	SelectionSort::Sort(foo);

	REQUIRE(sortedFoo == foo);
}

TEST_CASE("Merge sort")
{
	std::vector<int> foo = {1, 32, 96, -12, 0, 32, 120, 14};
	std::vector<int> sortedFoo = {-12, 0, 1, 14, 32, 32, 96, 120};

	MergeSort::Sort(foo);

	REQUIRE(sortedFoo == foo);
}
// Compile & run:
// make clean test
