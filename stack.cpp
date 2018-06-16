#if 0
William Daniel Taylor
6.16.18
Implementation of a stack using a linked list.
#endif

#include <iostream>
using namespace std;

class node
{
    public:
        //data and pointer to next node
        int data;
        node *next;

        node(int d)
        {
            data = d;
            next = NULL;
        }//end default constructor
};//end class

class Stack
{
    public:
        /* Keep in mind that stacks are Last In First Out
           while queues are First In First Out. */
           
        //top of the stack
        node *top;

        //method to add to stack
        void push(node *n)
        {
            n->next = top;
            top = n;
        }//end method

        //method to remove from stack
        void pop()
        {
            node* n = top;
            top = top->next;
            delete(n);
        }//end method

        //printing method
        void print()
        {
            node* ptr = top;
            while(ptr != NULL)
            {
                cout << ptr->data <<endl;
                ptr = ptr->next;
            }//end while

            cout << endl;
        }//end method

        Stack()
        {
            top = NULL;
        }//end default constructor
};//end class

int main()
{
    Stack s;

    //instantiating new nodes
    node *n1 = new node(67);
    node *n2 = new node(42);
    node *n3 = new node(3);

    //add nodes to stack
    s.push(n1);
    s.push(n2);
    s.push(n3);

    //print stack
    cout << "Current stack:\n";
    s.print();

    //remove n3 from stack (which is the top node) and print
    s.pop();
    cout << "Stack after pop:\n";
    s.print();

    delete [] n1;
    delete [] n2;
    delete [] n3;

    return 0;
}//end main