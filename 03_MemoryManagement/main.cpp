#include <iostream>
#include "foo.hpp"

int main ()
{
	Foo f;
	// do cool stuff with f
	return 0;
	int b[] = {1, 2, 3};
	// int c[3] = b; - NOPE
	int* c;
	c = b;
	c[2] = 9;

	std::cout << b[2] << std::endl;

	int a = 12;
	int* aptr = &a;
	*aptr = 7;

	std::cout << a <<std::endl; // want to not be 12
	std::cout << aptr << ": " << *aptr <<std::endl; // want to not be 12

	int& aAdd = a;
	std::cout << aAdd <<std::endl;

	int* newPtr = new int[10];

	//int spreadsheet[][] = int[10][20];

	int** spreadSheetPtr;
	spreadSheetPtr = new int*[10];
	for (int i = 0; i < 10; ++i)
	{
		spreadSheetPtr[i] = new int[20];
	}

	delete spreadSheetPtr;

	return 0;
}