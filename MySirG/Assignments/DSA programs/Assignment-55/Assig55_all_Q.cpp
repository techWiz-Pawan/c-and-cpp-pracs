                /////           Graph Matrix representation           /////
#include <iostream>
#include <stdio.h>
#define INVALID_NODE 1;
using namespace std;

class GraphMatrix
{
    private:
        int V_Count;        // Number of vertices in the graph
        int E_Count;        // Number of edges in the graph
        int** adj;          // Pointer to the adjacency list

    public:
        void createGraph(int, int);     
        void printMatrix();     // to print the matrix
        void printAdjacentNodes(int);     // print all adjacent nodes of given node
        bool IsolateNode(int);            // return true if node is isolated 

        ~GraphMatrix();
};

// vno = node kitne hai  || eno = edge kitne hai
void GraphMatrix::createGraph(int vno, int eno)
{
    // assigning number of nodes and edges i want in my graph
    V_Count = vno;
    E_Count = eno;

    int u, v;

    // now dynamically create aray of pointers which will store addresses of all array
    adj = new int*[V_Count];        // int*[V_Count] means array full of pointers  agar no. of node 5 hota tho int*[5] iska matlab 5 pointers ka array hai
    
    // now after creating array lets assign pointer in every index dynamically
    for (int i = 0; i < V_Count; i++)
        adj[i]  = new int[V_Count];     // dynamically har  index k liye array banega
    
    // av jo matrix bana hai usme initially 0 se initialise kar do
    // to  access elements of matrix or 2D array we need nested loop
    for (int i = 0; i < V_Count; i++)
    {
        for (int j = 0; j < V_Count; j++)
        {
            // adj[][] dynamically humne 2D array banaya tha
            adj[i][j] = 0;
        }
    }

    // abb gitna edges the uss graph me uss ghagha par 1 se replace kar dunga 
    // uske liye user se input lenge vertex number e.g.:  v0-----v1 hai tho user bhejega 0 and 1 using cin
    // par graph me ek se edges hote hai tho loop use karna hoga
    for (int k = 0; k < E_Count; k++)
    {
        cout << "Enter node number connecting edges: ";
        cin >> u >> v;

        // uske baad uss matrix me jo pura 0 hai av usme uss adj[u][v] location pe 1 se replace kar denge
        // v0 se v1 ek edge banega tho v1 se v0 ve tho edge bolenge
        adj[u][v] = 1;      
        adj[v][u] = 1;
    }
    
}

void GraphMatrix::printMatrix()
{
    cout << endl;
    for (int i = 0; i < V_Count; i++)
    {
        for (int j = 0; j < V_Count; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    
}

void GraphMatrix::printAdjacentNodes(int v)
{
    // first check bound condition of given node whose adj we need to find
    if(v >= 0 && v <= V_Count)      // v should be in this range only
    {
         
        cout << "\nAdjacent nodes of " << v << " are: " << endl;
        // we need to traverse the array using loop
        for (int i = 0; i < V_Count; i++)
        {
            // here 'v' is row of given node 'i' will traverse in that row
            if(adj[v][i] == 1)
                cout << "V" << i << endl;
        }
        
    }
}

bool GraphMatrix::IsolateNode(int v)
{
    bool flag = true;
    if(v >= 0 && v <= V_Count)
    {
        for (int i = 0; i < V_Count; i++)
        {
            if(adj[v][i] == 1)
                flag = false;
        }
        return flag;    
    }
    else
        throw INVALID_NODE;    
}

GraphMatrix::~GraphMatrix()
{
    /*
        we made thing dynamically
        1. array of pointers
        2. and array  

        so we need to delete that array first and then the array of pointers
    */
    for (int i = 0; i < V_Count; i++)
    {
        delete []adj[i];            // deleting 2d array
    }
    delete []adj;                   // deleting array
    
    /*
        note:
            i.  for deleting 2d array use "[]adj[i]"  where 'i' is every array in that matrix
            ii. deleting the array use "[]adj" 
    */
}

int main()
{
    GraphMatrix G;   // making obj of class GraphMatrix

    G.createGraph(5, 6);
    G.printMatrix();
    G.printAdjacentNodes(0);
    G.IsolateNode(4);

    cout << endl;
    return 0;
}