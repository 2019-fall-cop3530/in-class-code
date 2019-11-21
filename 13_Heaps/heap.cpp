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

int Heap::Pop ()
{
	int result = this->data.at(0);
	this->Swap(0, this->data.size() - 1);
	this->data.pop_back();

	int nodeID = 0;

	while (true)
	{
		int leftChild = this->GetLeftChild(nodeID);
		if (leftChild >= this->data.size())
		{
			break;
		}
		if (leftChild + 1 != this->data.size())
		{
			// has right child
			if (this->data.at(leftChild) > this->data.at(leftChild + 1))
			{
				++leftChild;
			}
		}

		if (this->data.at(nodeID) > this->data.at(leftChild))
		{
			this->Swap(nodeID, leftChild);
			nodeID = leftChild;
		}
		else
		{
			break;
		}
	}

	return result;
}
