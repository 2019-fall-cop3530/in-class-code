#include <iostream>

template <typename Foo>
void Swap (Foo& a, Foo& b);

int main ()
{
	int a = 3;
	int b = 5;
	Swap(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	return 0;
}

template <typename Foo>
void Swap (Foo& a, Foo& b)
{
	Foo temp = a;
	a = b;
	b = temp;
}