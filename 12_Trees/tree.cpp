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
		return;
	}

	Node* currentNode = this->root;
	while (currentNode != nullptr)
	{
		if (currentNode->GetData() > value)
		{
			if (currentNode->GetLeft() == nullptr) // about to fall off the tree
			{
				currentNode->SetLeft(newNode);
				break;
			}

			currentNode = currentNode->GetLeft();
		}
		else
		{
			if (currentNode->GetRight() == nullptr) // about to fall off the tree
			{
				currentNode->SetRight(newNode);
				break;
			}

			currentNode = currentNode->GetRight();
		}
	}
}

Node* Tree::GetRoot ()
{
	return this->root;
}
