#define CATCH_CONFIG_MAIN

#include "../../test/catch/catch.hpp"
#include <string>
#include "../graph.hpp"

TEST_CASE("Adjacency Matrix")
{
	std::string graphInput = "0100\n1010\n0100\n0000";
	Graph g(graphInput);
}
