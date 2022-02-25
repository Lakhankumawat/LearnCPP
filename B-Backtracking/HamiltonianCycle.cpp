

#include <iostream>
#include <list>
using namespace std;


//number of vertices
#define N 8
#define pb push_back
//vertices

char vertices_arr[]={'A','B','C','D','E','F','G','H'};

//Adjacency matrix

int adjM[N][N]=      { {0, 1, 0, 0, 0, 0, 0, 1},
                       {1, 0, 1, 0, 0, 0, 0, 0},
                       {0, 1, 0, 1, 0, 0, 0, 1},
                       {0, 0, 1, 0, 1, 0, 1, 0},
                       {0, 0, 0, 1, 0, 1, 0, 0},
                       {0, 0, 0, 0, 1, 0, 1, 0},
                       {0, 0, 0, 1, 0, 1, 0, 1},
                       {1, 0, 1, 0, 0, 0, 1, 0}  };



//To keep track of visited vertices
//lets make a visited array and initialise all values as 0
 int visited[N]={0};

 class Hamiltonian{

 public:
     //Start and end vertex
     int start;
     //Stack data structure is used to store the path of the cycle
     //List is used to store all the cycles
     list<int> cycle;

     //Variable to mark if graph has a cycle
     bool hasCycle= false;

     //Hamiltonian  class constructor
     Hamiltonian(int start){
     this->start=start;
     }

     //initiate the search on path/cycle
     void findCycle(){
         //First add starting vertex to list be4 starting
         cycle.pb(start);


         //Call solve method and start searching the path after start
         solve(start);

     }

      /*---------------FUNCTION TO SOLVE THE CYCLE ----------------*/
     /////////////////FUNCTION OF THE PROGRAM///////////////////////

     void solve(int vertex){
     //Base condition if the vertex is the start vertex
     //and all the nodes have been visited ones except start( twice )

     if(vertex == start && cycle.size() ==N+1){
        hasCycle=true;

        //Display the cycle
        displayCycle();

        //Since Backtracking return back to explore other possible solutions
        return;

     }

     //Iterate through neighbour vertices if not start

     for(int i=0;i<N;i++){
        //if there is path means adjM[vertex][i] must be one and also if the newly vertex is not visited

        if(adjM[vertex][i]==1 && visited[i]==0){
            int nbr=i;
            visited[nbr]=1;
            cycle.pb(nbr);


            //Go to the nbr vertex and find the corresponding cyle
            //Depth First Search basically
            solve(nbr);

            //At last cycle will have size N+1 and hence
            /*-----BACKTRACK-------*/

            visited[nbr]=0;
            cycle.pop_back();

        }
     }

     }


     //Function to display hamiltonian cycle

     void displayCycle(){
     cout<<"[";

     for(int v:cycle){
        cout<< vertices_arr[v]<<" ";

     }
     cout<<"] \n";

     }


 };


int main() {
    /*--------Driver Code---------*/

    //Making an object of Hamiltonian class
    Hamiltonian hamiltonian = Hamiltonian(0);

    hamiltonian.findCycle();

    //if graph doesn't have any hamiltonian cycle

    if(!hamiltonian.hasCycle){

        cout<<"No Hamiltonian Cycle here ";
    }

    return 0;
}


