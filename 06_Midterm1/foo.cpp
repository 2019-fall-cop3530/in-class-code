#include <iostream>
#include <string>

void Increment (const int& i);

int main ()
{
	std::string foo = "Hello";
	std::cout << foo.length() << std::endl;

	std::string* bar;
	bar = &foo;

	std::cout << (*bar).length() << std::endl;
	std::cout << bar->length() << std::endl;
	
	int baz = 10;
	Increment(baz);

	std::cout<< baz << std::endl;
}

void Increment (const int& i)
{
	//++i;
	std::cout<< i << std::endl;
}

friend std::ostream& operator<< (std::ostream& os, const Foo& f)







for (int i = 0; i < n; ++i)
{
	for (int j = i; j < n; ++j)
	{
		//do stuff
	}
}

Foo c("hey");
REQUIRE("foo" == c.GetFoo(12, 2.75));

std::string Foo::GetFoo (int i, float a)
{
	return "foo";
}


f (int i)
{
	if (i <= 0) return;
	f (i - 1);
	std::cout << i;

}