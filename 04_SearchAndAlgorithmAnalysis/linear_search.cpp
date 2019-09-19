#include "linear_search.hpp"


long long LinearSearch::Find (long long array[], long long length, long long searchTerm)
{
	for (long long i = 0; i < length; ++i)
	{
		if (array[i] == searchTerm)
		{
			return i;
		}
	}

	return -1;
}
