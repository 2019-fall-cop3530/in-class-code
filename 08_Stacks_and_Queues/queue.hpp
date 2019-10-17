#pragma once
#include "node.hpp"

template <typename T>
class Queue
{
	private:
		Node<T>* head;
		Node<T>* tail;

	public:
		Queue ();
		~Queue ();
		void Enqueue (T v);
		Node<T>* Dequeue ();
};
