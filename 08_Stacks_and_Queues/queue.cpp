#include "queue.hpp"

template <typename T>
Queue<T>::Queue ()
{
	this->head = nullptr;
	this->tail = nullptr;
}

template <typename T>
Queue<T>::~Queue ()
{
	Node<T>* currentNode = this->head;

	while (currentNode != nullptr)
	{
		this->head = this->head->GetNext();
		delete currentNode;
		currentNode = this->head;
	}
}

template <typename T>
void Queue<T>::Enqueue (T v)
{
	Node<T>* newNode = new Node<T>(v, nullptr);

	// List wasn't empty, make the old tail point to the new tail
	if (this->tail != nullptr)
	{
		this->tail->SetNext(newNode);
	}

	// update tail pointer to the new last thing in the queue
	this->tail = newNode;

	// queue was empty. Newest item is both the head and the tail
	if (this->head == nullptr)
	{
		this->head = newNode;
	}
}

template <typename T>
Node<T>* Queue<T>::Dequeue ()
{
	// might be empty, that's OK
	Node<T>* result = this->head;

	if (this->head != nullptr)
	{
		// queue was not empty, second item is now at the front of the queue
		this->head = this->head->GetNext();
	}

	if (this->head == nullptr)
	{
		// the queue is now empty. This means we just pulled out the lastt item and need to reset the tail
		this->tail = nullptr;
	}

	return result;
}

template class Queue<int>;
