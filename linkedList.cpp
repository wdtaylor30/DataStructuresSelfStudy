#if 0
William Daniel Taylor
6.18.18
Implemetation of a linked list.
#endif

#include <iostream>
using namespace std;

class node
{
    public:
    //data and pointer to the next node
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }//end default constructor

};//end class

class LinkedList
{
    public:
        node *head;

        //adds node at the front of the list
        void addNode(node *n)
        {
            n->next = head;
            head = n;
        }//end method

        //print list
        void printList()
        {
            node *ptr = head;
            while(ptr != NULL)
            {
                cout << ptr->data << " -> ";
                ptr = ptr->next;
            }//end while

            cout << endl;
        }//end method

        LinkedList()
        {
            head = NULL;
        }//end default constructor
};//end class

void buildList(int size)
{
    //instantiate a new list
    LinkedList list;

    //add to list
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an integer: ";
        int data;
        cin >> data;
        node *n = new node(data);
        list.addNode(n);
    }//end for

    //print list
    cout << endl;
    list.printList();
}//end method

int main()
{
    cout << "Enter list size (integer): ";
    int listSize;
    cin >> listSize;
    
    buildList(listSize);

    return 0;
}