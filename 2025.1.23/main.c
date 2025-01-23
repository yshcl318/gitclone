/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 1001
#define MAX_M 2001

// 邻接表结构
typedef struct Edge {
    int to;
    struct Edge *next;
} Edge;

// 邻接表头
Edge *head[MAX_N];
int visited[MAX_N];

// 添加边到图中
void addEdge(int from, int to) {
    Edge *newEdge = (Edge *)malloc(sizeof(Edge));
    newEdge->to = to;
    newEdge->next = head[from];
    head[from] = newEdge;
}

// 深度优先搜索
void dfs(int node, int remove) {
    visited[node] = 1;
    Edge *p = head[node];
    while (p) {
        if (p->to!= remove &&!visited[p->to]) {
            dfs(p->to, remove);
        }
        p = p->next;
    }
}

// 判断两个节点是否连通
int isConnected(int x, int y, int remove) {
    memset(visited, 0, sizeof(visited));
    visited[remove] = 1;
    dfs(x, remove);
    return visited[y];
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // 初始化邻接表
    for (int i = 0; i <= n; i++) {
        head[i] = NULL;
    }

    // 读入边
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(u, v);
        addEdge(v, u);
    }

    int x, y;
    scanf("%d %d", &x, &y);

    int count = 0;
    // 检查每个节点是否为关键点
    for (int i = 1; i <= n; i++) {
        if (i!= x && i!= y &&!isConnected(x, y, i)) {
            count++;
        }
    }

    if (isConnected(x, y, 0)) {
        printf("%d\n", count);
    } else {
        printf("-1\n");
    }

    // 释放邻接表内存
    for (int i = 1; i <= n; i++) {
        Edge *p = head[i];
        while (p) {
            Edge *tmp = p;
            p = p->next;
            free(tmp);
        }
    }

    return 0;
}
*/
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define M 10001
#define N 20001
typedef struct E
{
    int to;
    struct E* next;
}E;
E *head[M];
int V[N];
void A(int from,int to)
{
    E* newE=(E*)malloc(sizeof(E));
    newE->to=to;
    newE->next=head[from];
    head[from]=newE;
}
void dfs(int node,int remove)
{
    V[node]=1;
    E *p=head[node];
    while(p)
    {
        if(p->to!=remove&&V[p->to]!=1)
            dfs(p->to,remove);
        p=p->next;
    }
}
int C(int x,int y,int remove)
{
    memset(V,0,sizeof(V));
    V[remove]=1;
    dfs(x,remove);
    return V[y];
}
int main()
{
    int n,m,u,v;
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<=n;i++)
        head[i]=NULL;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&u,&v);
        A(u,v);
        A(v,u);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int count=0;
    for(i=1;i<=N;i++)
        if(i!=x&&i!=y&&!C(x,y,i))
            count++;
    if(C(x,y,0))
        printf("%d\n",count);
    else
        printf("-1\n");
    for(i=1;i<=n;i++)
    {
        E *p=head[i];
        while(p)
        {
            E *tmp=p;
            p=p->next;
            free(tmp);
        }
    }
    return 0;
}*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define M 10001
#define N 20001
typedef struct edge
{
    int to;
    struct edge *next;
}edge;
edge* head[M];
int V[N];
void A(int from,int to)
{
    edge *newedge=(edge*)malloc(sizeof(edge));
    newedge->to=to;
    newedge->next=head[from];
    head[from]=newedge;
}
void dfs(int node,int remove)
{
    V[node]=1;
    edge *p=head[node];
    while(p)
    {
        if(p->to!=remove&&!V[p->to])
            dfs(p->to,remove);
        p=p->next;
    }
}
int C(int x,int y,int remove)
{
    memset(V,0,sizeof(V));
    V[remove]=1;
    dfs(x,remove);
    return V[y];
}
int main()
{
    int n,m,u,v;
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<=n;i++)
        head[i]=NULL;
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&u,&v);
        A(u,v);
        A(v,u);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int count=0;
    for(i=1;i<=n;i++)
        if(i!=x&&i!=y&&!C(x,y,i))
            count++;
    if(C(x,y,0))
        printf("%d\n",count);
    else
        printf("-1\n");
    for(i=1;i<n;i++)
    {
        edge *p=head[i];
        while(p)
        {
            edge *tmp=p;
            p=p->next;
            free(tmp);
        }
    }
    return 0;
}
