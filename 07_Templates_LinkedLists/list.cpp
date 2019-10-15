#include "list.hpp"

template <typename T>
List<T>::List ()
{
	this->head = nullptr;
}

template <typename T>
void List<T>::InsertAtHead (T v)
{
	Node<T>* newNode = new Node<T>(v, this->head);
	this->head = newNode;
}

template <typename T>
Node<T>* List<T>::GetFront ()
{
	return this->head;
}

template class List<int>;
