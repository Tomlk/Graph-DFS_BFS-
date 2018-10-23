#pragma once
#include "Graph.h"
#include "stack"
class DFS_search
{
public:
	DFS_search(Graph g,int s=0);
	void DFS(Graph g, int s);//µİ¹é
	void DFSprint(Graph g, int s); //·Çµİ¹é ½èÖúÓÚÕ»
	~DFS_search();

private:
	bool* visited;
	stack<int> Mystack;
};

