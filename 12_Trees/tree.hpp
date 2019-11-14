#pragma once

#include "node.hpp"
#include <string>
#include <sstream>

class Tree
{
	public:
		Tree ();
		void Insert (int value);
		Node* GetRoot ();
		std::string PrintTree ();
		std::string RecursivePrintTree (Node* subtreeRoot);
	
	private:
		Node* root;
};
