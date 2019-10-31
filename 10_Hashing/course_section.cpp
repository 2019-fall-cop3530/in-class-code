#include "student.hpp"
#include <unordered_set>
#include <iostream>

int main ()
{
	std::unordered_set<Student> section;
	Student s1("Alan Turing", 123);

	section.insert(s1);

	Student s2("Steve Wozniak", 123);
	section.insert(s2);

	for (const Student& s: section)
	{
		std::cout << s.GetName() << std::endl;
	}
	return 0;
}
