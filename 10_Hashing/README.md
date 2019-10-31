# Hashing
* One-way.
* Password storage.
	* If plaintext is stored, a DB breach could be very bad.
* Data integrity via MD5 or SHA checksums.
	* SHA-256 used in Bitcoin blockchain.
	* Both involve chunking the data (and padding the final block so that all blocks are the same size), then interleaving each block via hashing.
	* Many rounds are run.
* CRC32.
	* Sometimes used for faster string comparisons in DB since the set size is smaller.
	In practice with large sets of data, many collisions occur so secondary "keys" are needed.
* Peppering.
	* Adds a common application prefix/suffix.
	* This helps ensure that even if your user's data is breached, the source code would also need to be breached.
* Salting password hashes
	* Reduces vulnerability to rainbow attacks if DB is compromised.
		* Each hash that is calculated is only valid for that salt, so a check against the entire DB won't work.

## Related STL Data Structures

### Hash Map
* Allows null values and up to 1 null key.

### map.cpp
```cpp
#include <unordered_map>
#include <string>
#include <iostream>

int main ()
{
	std::unordered_map<std::string, int> hashMap;
	hashMap["foo"] = 12;
	//std::cout << hashMap["foo"] << std::endl;

	hashMap["foo"] = 16;
	std::cout << hashMap["foo"] << std::endl; // prints 16, not 12

	return 0;
}
```

### Set
* Stores item as the key, rather than Map above which maps a key to the item (associative array).
### set.cpp
```cpp
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
		std::cout << "Shouldn't be here" << std::endl;
	 }
}
```
* Since the item is the key, creating a set of custom class objects requires:
	1. Writing an equality function for the class by overriding the `==` operator
		```cpp
		bool operator == (const Foo& otherObject) const {...}
		```
		1. `const` after a function?
			1. Makes the function so that no member variables of `this` can be changed (statics, and those marked with the `mutable` keyword are exceptions).
			1. Necessary when a `const` object will be passed (compile error otherwise).
			`const` pointers is how C++ calls `==`.
			1. If you declare a function as `const` then try to change something, such as `this->foo = "bar";`, you'll get a compiler error.
	1. Create a hash method within std, such as:
		```cpp
		template <>
		struct std::hash <Foo>
		{
			std::size_t operator () (const Foo & obj) const
			{
				/*
				 * the string class has defined how a string should be hashed, we'll just use
				 *  that hash method on a particular string inside our custom class
				 */
				return std::hash<std::string>()(obj.GetStringInfo());
			}
		};
		```
		1. Note that this is a fully-specialized template, we can use a less specific version like this as well, but it might get overriden by a more general hash:
		```cpp
		template <typename Foo>
		struct hash { ... }
		```

## Custom hash full example

### student.hpp
```cpp
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

/* Create hashing method so that the set know which bucket to place a Student in */
template<>
struct std::hash<Student>
{
	std::size_t operator () (const Student& s) const
	{
		return hash<int> ()(s.GetId());
	}
};
```

### student.cpp
```cpp
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
```

### course_section.cpp
```cpp
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
```
