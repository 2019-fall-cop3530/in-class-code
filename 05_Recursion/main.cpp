#include <iostream>

void printAscending (int i)
{
	if (i > 10)
	{
		return;
	}
	std::cout << i << std::endl;
	printAscending(i + 1);
}

int main ()
{
	printAscending (0);
	//int i = 0;
	//while (true)
	//{
		//std::cout << i++ << std::endl;
	//}
	return 0;
}