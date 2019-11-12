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

void Node::SetLeft(Node* newLeft)
{
	this->left = newLeft;
}

Node* Node::GetLeft()
{
	return this->left;
}

void Node::SetRight(Node* newRight)
{
	this->right = newRight;
}

Node* Node::GetRight()
{
	return this->right;
}
