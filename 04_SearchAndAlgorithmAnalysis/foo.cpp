#include <iostream>

int main ()
{
	int n = 1000;
	int operations = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			++operations;
		}
	}

	std::cout << operations << std::endl;
	return 0;
}