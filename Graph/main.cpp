#include "iostream"
#include "Graph.h"
#include "DFS_search.h"
#include "BFS_search.h"
using namespace std;
void DFS1(Graph g)
{
	DFS_search* dfs = new DFS_search(g);
	dfs->DFS(g, 0);
}
void DFS2(Graph g)
{
	DFS_search* dfs = new DFS_search(g);
	dfs->DFSprint(g,0);
}
void BFS(Graph g)
{
	BFS_search* bfs = new BFS_search(g,0);

}
void main()
{
	/*
	int Vertex_num;
	cout << "请输入顶点个数：";
	cin >> Vertex_num;
	Graph* graph = new Graph(Vertex_num);
	int a=1;
	int b = 2;
	while (a!=100)
	{
		cout << "请输入两边a b:";
		cin >> a>>b;
		if (a != 100)
		{
			graph->AddEdge(a, b);

		}

	}*/
	Graph* graph = new Graph(6);
	graph->AddEdge(0, 1);
	graph->AddEdge(0, 2);
	graph->AddEdge(1, 3);
	graph->AddEdge(3, 4);
	graph->AddEdge(1, 5);

	graph->printAllEdge();
	BFS(*graph);
	graph->XiGOU();
}