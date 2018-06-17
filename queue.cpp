#if 0
William Daniel Taylor
6.17.18
Implementation of a queue in C++.
#endif

#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;

        node(int d)
        {
            data = d;
            next = NULL;
        }//end default constructor
};//end class

class Queue
{
    public:
        node *front;
        node *back;

        //method to add to the queue
        void enqueue(node *n)
        {
            if (back == NULL)
            {
                front = back = n;
            }
            else
            {
                back->next = n;
                back = n;
            }//end if
        }//end method

        //method to remove from queue
        void dequeue()
        {
            if (front == NULL)
            {
                return;
            }//end if

            node *n = front;
            front = front->next;

            if (front == NULL)
            {
                back = NULL;
            }//end if
        }//end method

        void printQueue()
        {
            node *ptr = front;
            while (ptr != NULL)
            {
                cout << ptr->data << "->";
                ptr = ptr->next;
            }//end while

            cout << endl;
        }//end method

        Queue()
        {
            front = back = NULL;
        }//end default constructor
};//end class

int main()
{
    //initialize new queue
    Queue q;

    //initialize nodes
    node *n1 = new node(7);
    node *n2 = new node(78);
    node *n3 = new node(11);

    //add to queue and print
    q.enqueue(n1);
    q.enqueue(n2);
    q.enqueue(n3);
    
    cout << "Current queue:\n";
    q.printQueue();
    cout << endl;

    //remove from queue and print
    q.dequeue();

    cout << "Queue after dequeue:\n";
    q.printQueue();

    delete [] n1;
    delete [] n2;
    delete [] n3;

    return 0;
}//end main