#include "node.hpp"

Node::Node (int v, Node* n)
{
	this->data = v;
	this->next = n;
}

int Node::GetData ()
{
	return this->data;
}

Node* Node::GetNext ()
{
	return this->next;
}