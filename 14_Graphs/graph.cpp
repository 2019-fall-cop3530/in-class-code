#include "graph.hpp"

Graph::Graph(std::string input)
{
	int V = 0;
	for (int i = 0; i < input.length(); ++i)
	{
		if (input.at(i) == '\n')
		{
			break;
		}
		++V;
	}
	this->adjacencies = new bool*[V];

	for (int i = 0; i < V; ++i)
	{
		this->adjacencies[i] = new bool[V];
	}

	int row = 0;
	int column = 0;

	for (int i = 0; i < input.length(); ++i)
	{
		if (input.at(i) == '\n')
		{
			column = 0;
			++row;
		}
		else
		{
			this->adjacencies[row][column] = (input.at(i) == '1');
		}
	}
}
