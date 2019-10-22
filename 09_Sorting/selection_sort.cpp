#include "selection_sort.hpp"
void SelectionSort::Sort (std::vector<int>& myNumbers)
{
	int lowestSoFar;
	int lowestSoFarIndex;
	int temp;

	for (int i = 0; i < myNumbers.size(); ++i)
	{
		lowestSoFar = myNumbers[i];
		lowestSoFarIndex = i;
		// find the min
		for (int j = i + 1; j < myNumbers.size(); ++j)
		{
			if (lowestSoFar > myNumbers[j])
			{
				lowestSoFar = myNumbers[j];
				lowestSoFarIndex = j;
			}
		}

		//swap
		temp = myNumbers[i];
		myNumbers[i] = myNumbers[lowestSoFarIndex];
		myNumbers[lowestSoFarIndex] = temp;
	}
}
