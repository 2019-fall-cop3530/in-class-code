#include <iostream>
#include <string>

template <typename T>
T Max (T inArray[], int length);

int main ()
{
	int intArray[] = {1, 32, 98, 342, -1, 0};

	std::cout << "Biggest element: " << Max(intArray, 6) << std::endl;

	std::string words[] = {"foo", "bar", "baz", "hello", "world"};
	std::cout << "Biggest element: " << Max(words, 5) << std::endl;
	return 0;
}

template <typename T>
T Max (T inArray[], int length)
{
	T maxSoFar = inArray[0];
	// linear search
	for (int i = 1; i < 6; ++i)
	{
		if (inArray[i] > maxSoFar)
		{
			maxSoFar = inArray[i];
		}
	}

	return maxSoFar;
}