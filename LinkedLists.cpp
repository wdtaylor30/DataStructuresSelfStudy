#if 0
4/6/18
C++ implementation of a linked list
#endif

#include <iostream>
using namespace std;

class List
{
	//data members
	private:
		//node
		struct node
		{
			int data;
			node* next;	//creates a pointer that can point to another node
		}

		typedef struct node* nodePtr;

		nodePtr* head;

	//methods
	public:
}
