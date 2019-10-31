#include <unordered_set>
#include <iostream>

int main ()
{
	std::unordered_set<int> mySet;

	mySet.insert(23);
	mySet.insert(23);
	mySet.insert(23);
	mySet.insert(16);
	mySet.insert(18);

	for (const int& num: mySet)
	{
		std::cout << num << std::endl;
	}

	 if (mySet.find(16) != mySet.end())
	 {
		std::cout << "YAY 1" << std::endl;
	 }

	 if (mySet.find(-12) != mySet.end())
	 {
		std::cout << "YAY" << std::endl;
	 }
}