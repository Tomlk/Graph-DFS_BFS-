#include "BFS_search.h"



BFS_search::BFS_search(Graph g, int s)
{
	visited = new bool[g.VertexN()];
	for (int i = 0; i < g.VertexN(); i++)
	{
		visited[i] = false;
	}
	BFS(g, s);
	
}
void BFS_search::BFS(Graph g, int s)
{
	visited[s] = true;
	cout << s << "->";
	for (int i = 0; i < g.VertexN(); i++)
	{
		if (visited[i] == false && g.adj[s][i] == 1)
		{
			Myqueue.push(i);
			visited[i] = true;
		}
	}
	int temp;
	while (!Myqueue.empty())
	{
		temp = Myqueue.front();//取队头元素
		visited[temp] = true;
		Myqueue.pop(); //出队
		cout << temp << "->";
 		for (int i = 0; i < g.VertexN(); i++)
		{
			if (visited[i] == false && g.adj[temp][i] == 1)
			
				Myqueue.push(i);
		
		}



	}


}

BFS_search::~BFS_search()
{
	delete[] visited;
}
