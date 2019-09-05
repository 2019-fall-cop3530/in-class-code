#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
#include <sstream>

class Student
{
	private:
		std::string fname;
		std::string lname;
		double gpa;
	public:
		Student (std::string fn, std::string ln, double gpa);
		std::string ToString ();
};
#endif
