#pragma once
class Node
{
public:
	int value;
	Node* next;
	Node() : value(0), next(nullptr)
	{}

	Node(int value)
		: value(value), next(nullptr)
	{}
};

class Forward
{
private:
	Node* head;
	Node* tail;
public:
	Forward()
		:head(nullptr), tail(nullptr)
	{}
	void push_back(int value);
	void print();
};
