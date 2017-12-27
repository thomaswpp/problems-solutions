#include <bits/stdc++.h>
#include <list>

using namespace std;

/*

WHITE : Vertex is not processed yet.  Initially
        all vertices are WHITE.

GRAY : Vertex is being processed (DFS for this
       vertex has started, but not finished which means
       that all descendants (ind DFS tree) of this vertex
       are not processed yet (or this vertex is in function
       call stack)

BLACK : Vertex and all its descendants are
        processed.

While doing DFS, if we encounter an edge from current
vertex to a GRAY vertex, then this edge is back edge
and hence there is a cycle.


*/

enum Color {WHITE, GRAY, BLACK};

class Graph
{
    int V;
    list <int> *adj;
    bool DFS_util( int v, int color[] );

public:
    Graph( int V );
    void add_edge( int v, int w );
    bool DFS();
};

Graph::Graph( int  V )
{
    this->V = V+1;
    adj = new list<int>[V+1];
}

void Graph::add_edge( int v, int w )
{
    adj[v].push_back(w);
}

/*recursivo stack for save track */
bool Graph::DFS_util( int v, int color[] )
{

	color[v] = GRAY;

	list<int>:: iterator it;
	for( it = adj[v].begin(); it != adj[v].end(); ++it )
	{
	    int w = *it;

	    if( color[w] == GRAY )
	        return true;

	    if( color[w] == WHITE &&  DFS_util( w, color ) )
	       return true;
	}

	color[v] = BLACK;

	return false;

}

bool Graph::DFS()
{
    int *color = new int[V];

    for( int i = 0; i < V; i++ )
        color[i] = WHITE;

    for( int i = 1; i < V; i++ )
        if( color[i] == WHITE )
            if( DFS_util( i, color ) == true )
                return true;

    return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, a, b;

    cin >> t;

    while( t-- )
    {
        cin >> n >> m;

        Graph g(n);

        for( int i = 0; i < m; i++ )
        {
            cin >> a >> b;
            g.add_edge( a, b );
        }

    	if( g.DFS() )
        	cout << "SIM" << "\n";
    	else
        	cout << "NAO" << "\n";

    }

    return 0;
}
