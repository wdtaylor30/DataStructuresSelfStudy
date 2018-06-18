#if 0
William Daniel Taylor
6.17.18
Implementation of an adjacency matrix in C++.
#endif

#include <iostream>
using namespace std;

//method to print a coordinate, written b/c of repitition
void printPair(int x, int y)
{
    cout << "(" << x << ", " << y << ")";
}

class AdjacencyMatrix
{
    private:
        int n;
        int **adj;

    public:
        //add a new edge to graph
        void addEdge(int origin, int destination)
        {
            //check if points given are out of bounds of matrix size, a loop is created, or if the pair given is less than one
            if(origin > n || destination > n || origin < 1 || destination < 1)
            {
                cout << "Error. Invalid additon.\n";
                printPair(origin, destination);
            }
            else if(origin == destination)
            {
                cout << "Error. A loop has been created.\n";
            }
            else
            {
                adj[origin - 1][destination - 1] = 1;
            }//end if
        }//end method

        //remove an edge from graph
        void removeEdge(int origin, int destination)
        {
            if(origin > n || destination > n || origin < 1 || destination < 1)
            {
                cout << "Error. Invalid removal.\n";
                printPair(origin, destination);
            }
            else
            {
                adj[origin - 1][destination - 1] = 0;
            }
        }

        void displayGraph()
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << adj[i][j] << " ";
                }//end for
                cout << endl;
            }//end for
        }//end method

        AdjacencyMatrix(int n)
        {
            this->n = n;
            adj = new int*[n];

            for (int i = 0; i < n; i++)
            {
                adj[i] = new int[n];
                for (int j = 0; j < n; j++)
                {
                    adj[i][j] = 0;
                }//end for
            }//end for
        }//end constructor
};//end class

int main()
{
    //initialize matrix
    AdjacencyMatrix m(5);

    //add edges to matrix and print
    m.addEdge(1, 2);
    m.addEdge(1, 3);
    m.addEdge(1, 5);
    m.addEdge(2, 5);
    m.addEdge(2, 4);
    //example of a loop, commented out accordingly
    //m.addEdge(3, 3);
    m.addEdge(3, 2);
    m.addEdge(3, 4);
    m.addEdge(4, 2);
    m.addEdge(5, 1);
    m.addEdge(5, 4);

    cout << "Initial graph:\n";
    m.displayGraph();
    cout << endl;

    //remove some edges and print
    m.removeEdge(1, 2);
    m.removeEdge(1, 5);
    m.removeEdge(2, 5);
    m.removeEdge(5, 1);


    cout << "Graph after edge removal:\n";
    m.displayGraph();

    return 0;
}//end main