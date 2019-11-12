#pragma once

class Node
{
	private:
		Node* left;
		Node* right;
		int payload;

	public:
		Node(int payload);
		int GetData();

		void SetLeft(Node* newLeft);
		Node* GetLeft();

		void SetRight(Node* newRight);
		Node* GetRight();
};