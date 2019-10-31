#include <unordered_map>
#include <string>
#include <iostream>

int main ()
{
	std::unordered_map<std::string, int> hashMap;
	hashMap["foo"] = 12;
	//std::cout << hashMap["foo"] << std::endl;

	hashMap["foo"] = 16;
	std::cout << hashMap["foo"] << std::endl;

	return 0;
}