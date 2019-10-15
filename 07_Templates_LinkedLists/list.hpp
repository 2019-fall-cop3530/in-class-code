#pragma once
#include "node.hpp"

template <typename T>
class List
{
	private:
		Node<T>* head;

	public:
		List ();
		void InsertAtHead (T v);
		Node<T>* GetFront ();
};
