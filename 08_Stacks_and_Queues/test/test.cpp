#define CATCH_CONFIG_MAIN

#include "catch/catch.hpp"
#include "../node.hpp"
#include "../queue.hpp"

TEST_CASE("Node")
{
	Node<int>* n = new Node<int>(12);
	REQUIRE(12 == n->GetData());

	REQUIRE(nullptr == n->GetNext());

	Node<int>* n2 = new Node<int>(7, n);
	REQUIRE(7 == n2->GetData());
	REQUIRE(n == n2->GetNext());
	REQUIRE(12 == n2->GetNext()->GetData());


	// new test for SetNext
	n->SetNext(n2);
	REQUIRE(7 == n->GetNext()->GetData());

	delete n;
	delete n2;
}

TEST_CASE("Queue")
{
	Node<int>* temp ;

	Queue<int> q;
	q.Enqueue(2);
	q.Enqueue(4);

	temp = q.Dequeue();
	REQUIRE(2 == temp->GetData());
	delete temp;
	temp = q.Dequeue();
	REQUIRE(4 == temp->GetData());
	delete temp;

	temp = q.Dequeue(); // shouldn't crash but it is a nullptr
	REQUIRE(nullptr == temp);

	// fill the queue back up to make sure we didn't break anything by deleting the last item above
	q.Enqueue(2);
	q.Enqueue(4);
	q.Enqueue(6);
	q.Enqueue(8);

	temp = q.Dequeue();
	REQUIRE(2 == temp->GetData());
	delete temp;
	temp = q.Dequeue();
	REQUIRE(4 == temp->GetData());
	delete temp;
}

// Compile & run:
// make clean test
