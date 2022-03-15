// illustrating the need for 'friend' keyword

#include <iostream>
#include <vector>

using namespace std;

/* Edge is a user-defined structure comprising of: 2 vertices i and j
that the edge conncects, and its weight/cost/distance */

class Edge
{
public:
    int i, j;   // vertices
    int w;  // weight
};

// Graph is a user-defined structure here, containing several edges (weighted)

class Graph
{
    vector<Edge> edges; // a vector/array of edges in the graph

public:
    Graph()
    {}

    void addEdge(int i, int j, int w)
    {
        // creating a temporary object, initializing it, then pushing it into the vector

        Edge e;
        e.i = i;
        e.j = j;
        e.w = w;

        edges.push_back(e);
    }

    void print()
    {
        for(int i=0; i<edges.size(); i++)
            cout << "(" << edges[i].i << ", " << edges[i].j << ", " << edges[i].w << ")" << endl;
    }
};


int main()
{
    Graph g;

    g.addEdge(0, 1, 5);
    g.addEdge(1, 3, 12);
    g.addEdge(3, 0, 25);

    g.print();

    /*  Output: (0, 1, 5)
                (1, 3, 12)
                (3, 0, 25)  */

    return 0;
}

/* Note that the data members of the class Edge are public! This breaks the encapsulation since the class
Edge does not allow information hiding, i.e., its data members can be accessed directly by any other class
or function outside it.

Had there not been the public keyword explicitly used, the data members would have been private (since
private is the default access specifier) and the addEdge() & print() functions would end up giving a compilation error, as they will
no longer have access to the values i, j and w of an edge. 

To prevent this, the 'friend' keyword comes handy */
