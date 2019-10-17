#pragma once

template <typename T>
class Node
{
	private:
		T data;
		Node<T>* next = nullptr;
	public:
		Node (T v, Node<T>* next = nullptr);
		T GetData ();
		Node<T>* GetNext ();
		void SetNext (Node<T>* newNext);
};
