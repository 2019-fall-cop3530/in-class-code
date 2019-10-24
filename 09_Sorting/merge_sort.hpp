#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

#include <vector>

class MergeSort
{
	public:
		static void Sort (std::vector<int>& numbers);
		static void RecursiveSort (std::vector<int>& numbers, int left, int right);
		static void Merge (std::vector<int>& numbers, int left, int right, int middle);
};

#endif