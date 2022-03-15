// Illustatring how to maintain encapsulation using 'friend' keyword

#include <iostream>
#include <vector>

using namespace std;

/* Edge is a user-defined structure comprising of: 2 vertices i and j
that the edge conncects, and its weight/cost/distance */

class Edge
{
    // no access specifer implies private!

    int i, j;   // vertices
    int w;  // weight

    friend class Graph;

    /*  'friend' is a keyword in c++ used to allow information sharing to certain classes or functions. In this case,
    the class Edge is friends with class Graph which implies that class Graph can access all the data members of class Edge,
    (even if they're private!) */
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

/*  Note that the class Edge is not entirely encapsulated as it still allows another class to access its private data members.
The reason why the friend keyword, despite that, is still preferred is to make use of this selective encapsulation that c++ provides to prevent
information sharing with literally every other function or class and allow it only with "desirable" entities */
