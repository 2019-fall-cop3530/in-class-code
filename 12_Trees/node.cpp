#include "node.hpp"

Node::Node(int payload)
{
	this->payload = payload;
	this->left = nullptr;
	this->right = nullptr;
}

int Node::GetData()
{
	return this->payload;
}

void SetLeft(Node* newLeft);
Node* GetLeft();

void SetRight(Node* newRight);
Node* GetRight();
