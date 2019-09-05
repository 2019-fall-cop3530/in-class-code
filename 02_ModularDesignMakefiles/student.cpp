#include "student.hpp"

Student::Student (std::string fn, std::string ln, double gpa)
{
	this->fname = fn;
	this->lname = ln;
	this->gpa = gpa;
}

std::string Student::ToString ()
{
	std::ostringstream os;
	os << this->lname << ", " << this->fname << ": " << this->gpa;
	return os.str();
}