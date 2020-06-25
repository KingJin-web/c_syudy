

// 实验六　图的遍历操作
// 1.实验目的：
// 掌握有向图和无向图的概念；
// 掌握邻接矩阵和邻接链表建立图的存储结构；
// 掌握DFS及BFS对图的遍历操作；
// 2.实验内容
// 设计一个有向图和一个无向图，任选一种存储结构，
// 完成有向图和无向图的DFS（深度优先遍历）和BFS（广度优先遍历）的操作。
// 3.附加内容：
// 1）最小生成树算法prime      更新
// 2) 最小生成树算法kruscal    更新 
// 3) 实现dijkstra最短路径算法 更新  dist[0,3] <  dist[0,2] + adj[2][3]
// 4) floyd算法               更新
// 4.实验探讨：
// 1)、邻接矩阵表示图时的特点；
// 2)、用邻接链表表示图时的特点；
//3)、深度优先遍历和广度优先遍历算法与二叉树的遍历算法有没有相似性
#include <iostream>
#include <queue>
using namespace std;

const char *vex = "ABCDEFGH";
int n = 8;
int adj[8][8] = {0, 1, 0, 0, 1, 0, 0, 0,
                 1, 0, 0, 0, 1, 1, 0, 0,
                 0, 0, 0, 1, 0, 1, 0, 0,
                 0, 0, 1, 0, 0, 1, 0, 0,
                 1, 1, 0, 0, 0, 0, 0, 0,
                 0, 1, 1, 1, 0, 0, 0, 0,
                 0, 0, 0, 0, 0, 0, 0, 1,
                 0, 0, 0, 0, 0, 0, 1, 0};

bool isVisited[8] = {false};

int getAdj(int v, int w = 0) //FIRST, NEXT  相对w
{
    for (int i = w + 1; i < n; i++)
        if (adj[v][i] == 1)
            return i;
    return -1;
}

void getRoute(int v, int w, int *route, int len)
{

    route[len] = v;
    // isVisited[v] = true;

    if (v == w)
    {
        for (int i = 0; i < len + 1; i++)
            cout << vex[route[i]] << "-->";

        cout << endl;

        return;
    }

    for (int i = getAdj(v, 0); i != -1; i = getAdj(v, i))
    {
        bool isexisted = false;
        for (int j = 0; j < len; j++)
            if (i == route[j])
                isexisted = true;
        if (!isexisted)
        {
            getRoute(i, w, route, len + 1);
        }
    }
}

void dfs(int v) //连通图   // n^2
{
    cout << vex[v] << " ";
    isVisited[v] = true;

    for (int i = getAdj(v, 0); i != -1; i = getAdj(v, i))
    {
        if (!isVisited[i])
        {
            cout << v << "-->" << i << endl;
            dfs(i);
        }
    }
}

void dfs_all()
{
    for (int i = 0; i < n; i++)
    {

        if (!isVisited[i])
        {
            cout << "dfs connect component:";
            dfs(i);
            cout << endl;
        }
    }
}

void bfs(int v)
{
    queue<int> que;
    que.push(v);
    isVisited[v] = true;

    while (!que.empty())
    {
        int ext = que.front();
        que.pop();
        cout << vex[ext] << " ";

        for (int i = getAdj(ext, 0); i != -1; i = getAdj(ext, i))
        {
            if (!isVisited[i])
            {
                que.push(i);
                isVisited[i] = true;
            }
        }
    }
}
void bfs_all()
{
    for (int i = 0; i < n; i++)
    {

        if (!isVisited[i])
        {
            cout << "bfs connect component:";
            bfs(i);
            cout << endl;
        }
    }
}

int main()
{
    for (int i = 0; i < n; i++)
    {
        isVisited[i] = false;
    }
    // dfs_all();
    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     isVisited[i] = false;
    // }
    // bfs_all();

    //生成树
    // dfs(0);

    //求一条从顶点 i 到顶点 s  的简单路径
    int route[100];
    getRoute(0, 3, route, 0);
}