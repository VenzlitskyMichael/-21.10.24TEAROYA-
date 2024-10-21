#include "Forward.h"
#include <iostream>
using namespace std;

void Forward::push_back(int value)
{
	Node* new_mode = new Node(value);
	if (!head) {
		head = new_mode;
	}
	if (tail)
	{
		tail->next = new_mode;
	}
	tail = new_mode;
}


void Forward::print()
{
	Node* current = head;
	while (current)
	{
		cout << current->value << ' ';
		current = current->next;
	}
	cout << endl;
}	
