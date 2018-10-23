#include "DFS_search.h"



DFS_search::DFS_search(Graph g, int s)
{
	visited = new bool[g.VertexN()];
	for (int i = 0; i < g.VertexN(); i++)
		visited[i] = false;
	//DFS(g, s);

}
void DFS_search::DFS(Graph g, int s)
{
	visited[s] = true;
	cout << s << "->";
	for (int i = 0; i < g.VertexN(); i++)
		if (visited[i] == false && g.adj[s][i] == 1)
			DFS(g,i);

}
void DFS_search::DFSprint(Graph g, int s)  //非递归
{
	
	
	if (s < 0 || s >= g.VertexN())
		cout << "不合规矩的结点..." << endl;
	cout << s << "->";
	visited[s] = 1;
	Mystack.push(s);
	while (!Mystack.empty()) //栈非空？
	{
		s = Mystack.top();
		Mystack.pop();
		for (int i = 0; i < g.VertexN(); i++)
		{
			if (visited[i] == 0 && g.adj[s][i] == 1)
			{
				cout << i << "->";
					visited[i] = 1;
					Mystack.push(s);
					Mystack.push(i);
					break;
			}
		}

	}

}
DFS_search::~DFS_search()
{
	delete[] visited;
}
