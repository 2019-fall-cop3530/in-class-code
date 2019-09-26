#ifndef BINARY_SEARCH_HPP
#define BINARY_SEARCH_HPP


class BinarySearch
{
	public:
		static int Find (int arr[], int length, int searchKey);	
		static int RecursiveFind (int arr[], int left, int right, int searchKey);
};
#endif
