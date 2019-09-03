#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student
{
	private:
		std::string fname;
		std::string lname;
		double gpa;
	public:
		Student (std::string fn, std::string ln, double gpa);
};
#endif
