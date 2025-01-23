#include <stdio.h>
#include <stdlib.h>
int ch(int i,int j,int* arr1,int* arr2,int M)
{
    int p=0;
    for(int r=0;r<M;r++)
        if(i==arr1[r])
        {
            p=1;
            break;
        }
        else if(i==arr2[r])
        {
            p=2;
            break;
        }
    if(p==1)
    {
        for(int q=0;q<M;q++)
            if(j==arr2[q])
                return 1;
        return 0;
    }
    if(p==2)
    {
        for(int w=0;w<M;w++)
            if(j==arr2[w])
                return 1;
        return 0;
    }
    return 0;
}
int main()
{
    int N,M,a=0;
    scanf("%d %d",&N,&M);
    int i=0,j=0,k,g;
    int* arr1 = (int*)malloc(M * sizeof(int));
    int* arr2 = (int*)malloc(M * sizeof(int));
    if (arr1 == NULL || arr2 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for(i=0;i<M;i++)
        scanf("%d %d",&arr1[i],&arr2[i]);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            for(k=1;k<=N;k++)
            {
                for(g=1;g<=N;g++)
                {
                    if(i!=k&&i!=j&&j!=k&&j!=g&&k!=g)
                    {
                        if(ch(i,j,arr1,arr2,M))
                            if(ch(j,k,arr1,arr2,M))
                                if(ch(k,g,arr1,arr2,M))
                                    a++;
                    }
                }
            }
        }
    }
    printf("%d",a);
    free(arr1);
    free(arr2);
    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
// 邻接表节点结构体
typedef struct Node {
    int val;
    struct Node* next;
} Node;


// 向邻接表添加节点
Node* addNode(Node* head, int val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = head;
    return newNode;
}


// 深度优先搜索函数
int dfs(Node** adjList, int cur, int depth, int start, int target) {
    if (depth == 3) {
        if (cur == target) {
            return 1;
        }
        return 0;
    }
    int count = 0;
    Node* temp = adjList[cur];
    while (temp) {
        if (temp->val!= start) {
            count += dfs(adjList, temp->val, depth + 1, cur, target);
        }
        temp = temp->next;
    }
    return count;
}


int main() {
    int N, M, a = 0;
    scanf("%d %d", &N, &M);
    Node** adjList = (Node**)malloc((N + 1) * sizeof(Node*));
    for (int i = 0; i <= N; i++) {
        adjList[i] = NULL;
    }
    for (int i = 0; i < M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        adjList[u] = addNode(adjList[u], v);
        adjList[v] = addNode(adjList[v], u);
    }
    for (int start = 1; start <= N; start++) {
        for (int target = 1; target <= N; target++) {
            a += dfs(adjList, start, 0, -1, target);
        }
    }
    printf("%d", a);


    // 释放邻接表内存
    for (int i = 0; i <= N; i++) {
        Node* temp = adjList[i];
        while (temp) {
            Node* next = temp->next;
            free(temp);
            temp = next;
        }
    }
    free(adjList);
    return 0;
}
*/
