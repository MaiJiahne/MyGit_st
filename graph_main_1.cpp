#include "graph.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	Graph G;
	G.createGraph();
	G.display();
	cout << "从结点 0 开始广度优先遍历图" << endl;
	G.BFS(0);
	cout << endl;
	cout << "从结点 0 开始深度优先遍历图" << endl;
	G.DFS(0);
	cout << endl;
	cout << "普利姆算法" << endl;
	G.MiniSpanTree_Prim(0);

	Digraph DG;
	DG.createGraph();
	DG.display();
	DG.shortestPath_DIJ(0);
	cout << "算出各个点到 0 的最短路径" << endl;
	DG.displayShortestPath();



	Delete();//删除辅助动态内存
}