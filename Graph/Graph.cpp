#include "Graph.h"



Graph::Graph(int V)
{
	this ->v = V;
	
	adj = new int*[V];
	for (int i = 0; i < V; i++)
		adj[i] = new int[V];

	for (int i = 0; i < V; i++)
		for (int j = 0; j < V; j++)
			adj[i][j] = 0;
}


Graph::~Graph()
{
	
	/*for (int i = 0; i < v; i++)
		delete[] adj[i];
	delete[] adj;*/
	
}
void Graph::XiGOU()
{
	
	for (int i = 0; i < v; i++)
		delete[] adj[i];
	delete[] adj;
}
int Graph::VertexN()
{
	return v;

}
int Graph::EdgeN() {

	return e;
}
void Graph::AddEdge(int v1, int v2)
{
	adj[v1][v2] = 1;
	adj[v2][v1] = 1;
	//adj[v1].push_back(v2);
	//adj[v2].push_back(v1);
	++e;


}
void Graph::printAllEdge()
{
	for(int i=0;i<v;i++)
		for (int j = i; j < v; j++)
		{
			if (adj[i][j] == 1)
				cout << "´æÔÚ " << i << " -> " << j << endl;
		}


}
