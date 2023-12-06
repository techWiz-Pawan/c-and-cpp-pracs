                    /////           Graph List representation          /////
                        @@@@@@@@@@@@@@@@-->HOLD<--@@@@@@@@@@@@@@@@                    
#include <iostream>
#include <stdio.h>

using namespace std;
// list k node me hume vertex/node aur next pointer chaheye
struct node
{
    int item;               // kuch item v rakhna hai tho node me rakh sakte ho
    int vertex;             // konsa node hai vo basically
    node *next;             // ek next pointer jo aage wale node ko point karega
};

// adjList chaheye jo saare list ke "start" pointer ko point kar raha tha
class adjList       // imagine u making SLL it the same
{
    private:
        node *start;
        int vertex;         // gis vertex k liye ye list bun rahi hai vo hai
    public:
        adjList();          // agar koi argument nahi hoga
        adjList(int);       // agar argument hai tho vertex ko v initialise karo
        // adjlist SLL jaisa he hai tho usske method yaha banyege
        node* getStart();
        void setVertex(int);
        void addNode(int, int);
        void removeFirstNode();
        void printList();

        ~adjList();
};

adjList::adjList()
{
    start = NULL;
}

// ye linked list kis vertex k liye bun rahi hai ye vertex 'v' hai
adjList::adjList(int v)
{
    start = NULL;
    vertex = v;
}

node* adjList::getStart()
{
    return start;
}

void adjList::setVertex(int v)
{
    vertex = v;
}

void adjList::addNode(int v, int data)
{
    node *n = new node;
    n->item = data;
    n->vertex = v;
    n->next = start;    // jo start first node ko point kar raha tha vo abb n->next me jayega

    start = n;
}

void adjList::removeFirstNode()
{
    node *t;
    if(start)
    {
        t = start;
        start = start->next;
        delete t;
    }
}

adjList::~adjList()
{
    while(start)
        removeFirstNode();
}

void adjList::printList()
{
    node *t;
    t = start;
    while(t)
    {
        cout << "(" << vertex << " , " << t->item << ")  ";
        t = t->next;
    }
}

class Graph
{
    private:
        int V_Count;
        adjList *arr;
    public:
        Graph(); 
        void createGraph(int);
};

Graph::Graph()
{
    V_Count = 0;
    arr = NULL;
}

void Graph::createGraph(int vno)        // kitne nodes hai vo pass karoge
{
    int n, v, data;
    V_Count = vno;
    // gitni badi v_count hai utni badi adjacency list banao dynamically
    arr = new adjList[V_Count];     // ye jo array bana hai uske har ek index ek list ko point kar raha hai
    // hume ek loop chaheye jitne number of nodes hai V_Count tak
    // har ek node k liye hume list banani hai

    for (int i = 0; i < V_Count; i++)
    {
        // sabse pahele setVertex() ko call kiye arr[i] me assigne hote jayega
        arr[i].setVertex(i);

        // user se input lenge har ek node k kitne adjacent node hai
        cout << "\nHow many adjacent node of V" << i << ": ";
        cin >> n;

        // number of neighbouring node hai utni baar ye wala node chale
        for (int j = 0; j < n; j++)
        {
            // hum user se vertex number puchte hai of it adjacent node aur uske saath data rahega saath me vo
            cout << "\nEnter vertex number: ";
            cin >> v;

            cout << "\nEnter the data to store: ";
            cin >> data;

            // fir baad me usse adjacency list me add kar de rahe hai
            arr[i].addNode(v, data);
        }
        
    }
    
}