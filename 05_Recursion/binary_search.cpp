#include "binary_search.hpp"

int BinarySearch::Find (int arr[], int length, int searchKey)
{
	return BinarySearch::RecursiveFind(arr, 0, length -1, searchKey);
	
}

int BinarySearch::RecursiveFind (int arr[], int left, int right, int searchKey)
{
	int middle = (left + right) / 2;
	int response = -1;

	if (left > right)
	{
		response = -1;
	}
	else if (arr[middle] == searchKey)
	{
		response = middle;
	}
	else if (arr[middle] < searchKey)
	{
		// search the right half
		left = middle + 1;
		response = BinarySearch::RecursiveFind(arr, left, right, searchKey);
	}
	else
	{
		right = middle - 1;
		response = BinarySearch::RecursiveFind(arr, left, right, searchKey);
	}

	return response;
}