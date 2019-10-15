#include "node.hpp"

template <typename T>
Node<T>::Node (T v, Node<T>* n)
{
	this->data = v;
	this->next = n;
}

template <typename T>
T Node<T>::GetData ()
{
	return this->data;
}

template <typename T>
Node<T>* Node<T>::GetNext ()
{
	return this->next;
}

template class Node<int>;