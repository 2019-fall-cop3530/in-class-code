class Node
{
	private:
		int data;
		Node* next = nullptr;
	public:
		Node (int v, Node* next = nullptr);
		int GetData ();
		Node* GetNext ();
};
