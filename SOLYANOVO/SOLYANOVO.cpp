#include "Forward.h"
#include <iostream>


using namespace std;

int main()
{
	Forward list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);

	list.print();
	return 0;
}
