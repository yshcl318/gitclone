#include <stdio.h>
#include <string.h>
#define MAXN 10010
#define MAXM 100010

int d[MAXN], u[MAXM], v[MAXM];

int main() {
    int n, i, m;
    long long ans = 0;
    // 从标准输入读取节点数量 n 和边的数量 m
    scanf("%d %d", &n, &m);
    // 将 d 数组元素全部初始化为 0，d 数组存储节点的度数
    memset(d, 0, sizeof(d));
    for (i = 0; i < m; i++) {
        // 读取边的两个端点
        scanf("%d %d", &u[i], &v[i]);
        // 对应节点的度数加 1
        d[u[i]]++;
        d[v[i]]++;
    }
    for (i = 0; i < m; i++) {
        // 如果边的两个端点的度数都大于 1
        if (d[u[i]] > 1 && d[v[i]] > 1)
            // 按照特定规则计算并累加到 ans
            ans += (d[u[i]] - 1) * (d[v[i]] - 1) * 2;
    }
    // 输出最终结果
    printf("%lld", ans);
    return 0;
}
