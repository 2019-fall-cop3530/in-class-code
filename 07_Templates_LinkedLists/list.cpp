#include "list.hpp"

template <typename T>
List<T>::List ()
{
	this->head = nullptr;
}

template <typename T>
List<T>::~List ()
{
	Node<T>* currentNode = this->head;

	while (currentNode != nullptr)
	{
		this->head = currentNode->GetNext();
		delete currentNode;
		currentNode = this->head;
	}
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

template <typename T>
void List<T>::DeleteFromHead ()
{
	if (nullptr != this->head)
	{
		Node<T>* garbage = this->head;
		this->head = this->head->GetNext();
		delete garbage;
	}
}

template class List<int>;
