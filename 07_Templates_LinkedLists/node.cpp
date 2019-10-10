#include "node.hpp"

Node::Node (int v)
{
	this->data = v;
}

int Node::GetData ()
{
	return this->data;
}

Node* Node::GetNext ()
{
	return this->next;
}