#include <iostream>
int main ()
{
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

	return 0;
}