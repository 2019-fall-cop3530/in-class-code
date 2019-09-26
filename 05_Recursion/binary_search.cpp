#include "binary_search.hpp"

int BinarySearch::Find (int arr[], int length, int searchKey)
{
	return BinarySearch::RecursiveFind(arr, 0, length -1, searchKey);
	
}

int BinarySearch::RecursiveFind (int arr[], int left, int right, int searchKey)
{
	int middle = (left + right) / 2;

	if (left > right)
	{
		return -1;
	}

	if (arr[middle] == searchKey)
	{
		return middle;
	}
	else if (arr[middle] < searchKey)
	{
		// search the right half
		left = middle + 1;
		return BinarySearch::RecursiveFind(arr, left, right, searchKey);
	}
	else
	{
		right = middle - 1;
		return BinarySearch::RecursiveFind(arr, left, right, searchKey);
	}
}