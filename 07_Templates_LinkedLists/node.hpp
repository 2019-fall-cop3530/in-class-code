class Node
{
	private:
		int data;
		Node* next = nullptr;
	public:
		Node (int v);
		int GetData ();
		Node* GetNext ();
};
