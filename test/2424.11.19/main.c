#include <stdio.h>
#include <string.h>

int scoreCounts[5]; // �洢ÿ������������
void sortScoreCounts() {
    int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (scoreCounts[j] > scoreCounts[j + 1]) {
                temp = scoreCounts[j];
                scoreCounts[j] = scoreCounts[j + 1];
                scoreCounts[j + 1] = temp;
            }
        }
    }
}
char getStarOrSpace(int level, int count) {
    if (count < level) {
        return ' ';
    } else {
        return '*';
    }
}
int main() {
    int repeat, n, score;

    scanf("%d", &repeat);
    for (int i = 1; i <= repeat; i++) {
        int scores[5] = {0}; // �洢ÿ������������
        scanf("%d", &n);
        for (int k = 1; k <= n; k++) {
            scanf("%d", &score);
            scores[score - 1]++;
        }
        for (int k = 0; k < 5; k++) {
            scoreCounts[k] = scores[k];
        }
        sortScoreCounts();
        int maxCount = scoreCounts[4]; // ������������
        for (int k = maxCount; k >= 1; k--) {
            char scoreLine[13];
            sprintf(scoreLine, "%c %c %c %c %c", getStarOrSpace(k, scores[0]), getStarOrSpace(k, scores[1]), getStarOrSpace(k, scores[2]), getStarOrSpace(k, scores[3]), getStarOrSpace(k, scores[4]));
            // �Ƴ��ַ���ĩβ�Ŀո�
            for (int j = strlen(scoreLine) - 1; j >= 0; j--) {
                if (scoreLine[j] == ' ') {
                    scoreLine[j] = '\0';
                    break;
                } else {
                    break; // һ�������ǿո��ַ���ֹͣѭ��
                }
            }
            printf("%s\n", scoreLine);
        }
        printf("1 2 3 4 5\n");
    }
    return 0;
}
