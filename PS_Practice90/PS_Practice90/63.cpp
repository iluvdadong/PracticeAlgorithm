//63�� - �������(����ġ ����׷���)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int map[51][51]; //������� : ������ ���� 50����� ����

int main() {

	freopen("input.txt", "rt", stdin);
	int n, m, a, b, c; //������ ���� ������ ����

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c; //a�࿡�� b���� ����. �̶� ������ ��밪�� c��
		//map[a][b] = 1; //������ �׷����Ͻ�
		//map[b][a] = 1; //������ �׷����Ͻ�
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}