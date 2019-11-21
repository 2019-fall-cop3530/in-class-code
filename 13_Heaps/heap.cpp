#include "heap.hpp"

int Heap::GetParentID (int nodeID)
{
	return (nodeID - 1) / 2;
}
