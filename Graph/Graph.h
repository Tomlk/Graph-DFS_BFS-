#pragma once
#include "iostream"
#include "vector"
#include "list"
#include "string"
#define MaxN 100
using namespace std;
class Graph
{
public:
	int VertexN();
	int EdgeN();
	void AddEdge(int v1, int v2);
	void printAllEdge();
	void XiGOU();
	Graph(int V);
	~Graph();
private:
	int v;
	int e;
public:
	int **adj;
	//int adj[MaxN][MaxN];
	//vector<list<int>> adj; //向量 adj 中每个元素都是一个list，每一个顶点管理着它的邻接列表
	//相当于邻接矩阵

};

