#include "binary_search.hpp"

long long BinarySearch::Find (long long array[], long long right, long long searchTerm)
{
	long long middle = right / 2;
	long long left = 0;

	while (right > left)
	{
		if (array[middle] == searchTerm)
		{
			return middle;
		}
		else if (array[middle] > searchTerm)
		{
			// search left half
			right = middle - 1;
		}
		else
		{
			// search right half
			left = middle + 1;
		}

		middle = (left + right) / 2;
	}

	return -1;
}