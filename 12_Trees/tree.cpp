#include "tree.hpp"

Tree::Tree ()
{
	this->root = nullptr;
}

void Tree::Insert (int value)
{
	Node* newNode = new Node(value);

	if (this->root == nullptr)
	{
		this->root = newNode;
	}
}

Node* Tree::GetRoot ()
{
	return this->root;
}
