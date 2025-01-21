#include <stdio.h>
#include <string.h>
#define MAXN 10010
#define MAXM 100010

int d[MAXN], u[MAXM], v[MAXM];

int main() {
    int n, i, m;
    long long ans = 0;
    // �ӱ�׼�����ȡ�ڵ����� n �ͱߵ����� m
    scanf("%d %d", &n, &m);
    // �� d ����Ԫ��ȫ����ʼ��Ϊ 0��d ����洢�ڵ�Ķ���
    memset(d, 0, sizeof(d));
    for (i = 0; i < m; i++) {
        // ��ȡ�ߵ������˵�
        scanf("%d %d", &u[i], &v[i]);
        // ��Ӧ�ڵ�Ķ����� 1
        d[u[i]]++;
        d[v[i]]++;
    }
    for (i = 0; i < m; i++) {
        // ����ߵ������˵�Ķ��������� 1
        if (d[u[i]] > 1 && d[v[i]] > 1)
            // �����ض�������㲢�ۼӵ� ans
            ans += (d[u[i]] - 1) * (d[v[i]] - 1) * 2;
    }
    // ������ս��
    printf("%lld", ans);
    return 0;
}
