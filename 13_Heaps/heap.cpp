#include "heap.hpp"

int Heap::GetParentID (int nodeID)
{
	return (nodeID - 1) / 2;
}

int Heap::GetLeftChild (int nodeID)
{
	return (2 * nodeID) + 1;
}
