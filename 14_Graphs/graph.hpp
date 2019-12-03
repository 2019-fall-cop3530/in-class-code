#pragma once
#include <string>

class Graph
{
	private:
		bool** adjacencies;
	public:
		Graph(std::string input);
		bool HasEdge (int i, int j);
};
