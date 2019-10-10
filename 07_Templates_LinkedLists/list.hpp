#pragma once
#include "node.hpp"

class List
{
	private:
		Node* head;

	public:
		List ();
		void InsertAtHead (int v);
		Node* GetFront ();
};
