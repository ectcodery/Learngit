//无向图邻接矩阵搜索遍历的程序代码
#include<stdio.h>
#include<stdlib.h>
//图的邻接矩阵类型定义
#define n 8
#define e 10
typedef char vextype;
typedef int adjtype;
typedef struct
{
	vextype vexs[n];
	adjtype arcs[n][n];
}graph;

graph *g;




void main()
{

    int i;
    char ch;
    for(i = 0;i<3;i++)
    {
        ch = getchar();
        g->vexs[i] = ch;
    }
    printf("%c", g->vexs[1]);
}
