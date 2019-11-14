#include "tree.hpp"

Tree::Tree ()
{
	this->root = nullptr;
}

Tree::~Tree ()
{
	this->DeleteSubTree(this->root);
}

void Tree::DeleteSubTree (Node* subtreeRoot)
{
	if (subtreeRoot == nullptr)
	{
		return;
	}

	this->DeleteSubTree(subtreeRoot->GetLeft());
	this->DeleteSubTree(subtreeRoot->GetRight());

	delete subtreeRoot;
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


std::string Tree::PrintTree ()
{
	return this->RecursivePrintTree(this->root);
}

std::string Tree::RecursivePrintTree (Node* subtreeRoot)
{
	if (subtreeRoot == nullptr)
	{
		return "";
	}

	std::ostringstream printedTree;

	printedTree << this->RecursivePrintTree(subtreeRoot->GetLeft());

	printedTree << subtreeRoot->GetData() << " ";

	printedTree << this->RecursivePrintTree(subtreeRoot->GetRight());

	return printedTree.str();
}
