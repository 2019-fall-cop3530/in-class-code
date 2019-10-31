#include "student.hpp"


Student::Student(std::string n, int i)
{
	this->name = n;
	this->id = i;
}

int Student::GetId() const
{
	return this->id;
}

std::string Student::GetName() const
{
	return this->name;
}

bool Student::operator == (const Student& otherStudent) const
{
	return this->id == otherStudent.GetId() &&
		this->name == otherStudent.GetName();
}
