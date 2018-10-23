#pragma once
#include "iostream"
#include "Graph.h"
#include "queue"
using namespace std;
class BFS_search
{
public:
	BFS_search(Graph g,int s);
	void BFS(Graph g, int s);
	~BFS_search();

private:
	bool* visited;
	queue<int> Myqueue;

};

