#include "merge_sort.hpp"

void MergeSort::Sort (std::vector<int>& numbers)
{
	MergeSort::RecursiveSort(numbers, 0, numbers.size() - 1);
}

void MergeSort::RecursiveSort (std::vector<int>& numbers, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int middle = (left + right) / 2;

	MergeSort::RecursiveSort(numbers, left, middle); // left half
	MergeSort::RecursiveSort(numbers, middle + 1, right); // right half

	MergeSort::Merge(numbers, left, right, middle);
}

void MergeSort::Merge (std::vector<int>& numbers, int left, int right, int middle)
{
	int leftIndex = left;
	int rightIndex = middle + 1;
	std::vector<int> input = numbers;

	while (leftIndex <= middle && rightIndex <= right)
	{
		if (input[leftIndex] < input[rightIndex])
		{
			numbers[left++] = input[leftIndex++];
		}
		else
		{
			numbers[left++] = input[rightIndex++];
		}
	}

	while (leftIndex <= middle)
	{
		numbers[left++] = input[leftIndex++];
	}

	while (rightIndex <= right)
	{
		numbers[left++] = input[rightIndex++];
	}
}
