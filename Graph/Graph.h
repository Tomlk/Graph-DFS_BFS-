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
	//vector<list<int>> adj; //���� adj ��ÿ��Ԫ�ض���һ��list��ÿһ����������������ڽ��б�
	//�൱���ڽӾ���

};

