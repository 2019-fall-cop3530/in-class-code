#include "foo.hpp"

Foo::Foo ()
{
	int b = 12;
	this->f = new int(12);
}

Foo::~Foo ()
{
	delete this->f;
}