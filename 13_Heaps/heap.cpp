#include "heap.hpp"

int Heap::GetParentID (int nodeID)
{
	return (nodeID - 1) / 2;
}

int Heap::GetLeftChild (int nodeID)
{
	return (2 * nodeID) + 1;
}

void Heap::Swap (int a, int b)
{
	int temp = this->data.at(a);
	this->data.at(a) = this->data.at(b);
	this->data.at(b) = temp;
}

void Heap::Insert (int value)
{
	this->data.push_back(value);
	// percolate
	int nodeID = this->data.size() - 1;
	int parentID;
	while (true)
	{
		parentID = this->GetParentID(nodeID);
		if (parentID < 0)
		{
			break;
		}

		if (this->data.at(nodeID) < this->data.at(parentID))
		{
			this->Swap(nodeID, parentID);
			nodeID = parentID;
		}
		else
		{
			break;
		}
	}
}

int Heap::Peek ()
{
	return this->data.at(0);
}
