#pragma once

#include "node.hpp"

class Tree
{
	public:
		Tree ();
		void Insert (int value);
		Node* GetRoot ();
	
	private:
		Node* root;
};
