#pragma once
#include <string>

class Student
{
	private:
		std::string name;
		int id;
	public:
		Student(std::string n, int i);
		int GetId() const;
		std::string GetName() const;
		bool operator == (const Student& otherStudent) const;
};

template<>

struct std::hash<Student>
{
	std::size_t operator () (const Student& s) const
	{
		return hash<int> ()(s.GetId());
	}
};