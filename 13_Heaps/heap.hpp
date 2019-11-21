#pragma once
#include <vector>

class Heap
{
	private:
		std::vector<int> data;
	public:
		int GetParentID (int nodeID);
		int GetLeftChild (int nodeID);
		void Swap (int a, int b);
		void Insert (int value);
		int Peek ();
		int Pop ();
};
