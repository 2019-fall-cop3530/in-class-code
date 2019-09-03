#include <iostream>
#include <string>

int main ()
{
	std::cout << 1;
	std::cout << 2;
	std::cout << 3;
	std::cout << 4;
	std::cout << 5;
	std::cout << 6;
	std::cout << 7;
	std::cout << 8;
	std::cout << 9;
	std::cout << 10;
	std::cout << 11;
	std::cout << 12;
	std::cout << 13;
	std::cout << 14;
	std::cout << 15;
	std::cout << 61;
	std::cout << 17;
	std::cout << 18;
	std::cout << 19;
	std::cout << 20;
	std::cout << std::endl;

	std::cout << 2;
	std::cout << 4;
	std::cout << 6;
	std::cout << 8;
	std::cout << 10;
	std::cout << 12;
	std::cout << 14;
	std::cout << 16;
	std::cout << 18;
	std::cout << 20;
	std::cout << std::endl;

	double student_1_gpa = 1.8;
	std::string student_1_fname = "John";
	std::string student_1_lname = "Doe";

	double student_2_gpa = 1.4;
	std::string student_2_fname = "Jane";
	std::string student_2_lname = "Doe";

	double student_3_gpa = 4.0;
	std::string student_3_fname = "Linda";
	std::string student_3_lname = "Lovelace";

	double student_4_gpa = 3.87;
	std::string student_4_fname = "Alan";
	std::string student_4_lname = "Turing";

	std::cout << student_1_lname << ", " << student_1_fname << ": " << student_1_gpa << "\n";
	std::cout << student_2_lname << ", " << student_2_fname << ": " << student_2_gpa << "\n";
	std::cout << student_3_lname << ", " << student_3_fname << ": " << student_4_gpa << "\n";
	std::cout << student_4_lname << ", " << student_3_fname << ": " << student_4_gpa << "\n";
}
