#include "list.hpp"

List::List ()
{
	this->head = nullptr;
}

void List::InsertAtHead (int v)
{
	Node* newNode = new Node(v, this->head);
	this->head = newNode;
}
