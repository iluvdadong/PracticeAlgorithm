//49�� - �ױ� ����� �ִ밪 (2���� �迭 ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int a[11][11], len[11];

int main() {

	int n, sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", &len[i]);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[j][i] = len[i];
		}
	}

	//for�� ���� n���� �����ϸ� i>=1���ϴ� �� i<=1�� �߸� ���� �Ǽ���
	for (int i = n; i >= 1; i--)
		scanf("%d", &len[i]);

	for (int i = 1; i <= n;i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] > len[i]) a[i][j] = len[i];
		}
	}

	for (int i = 1; i <= n;i++) {
		for (int j = 1; j <= n; j++) {
			sum += a[i][j];
		}
	}

	printf("%d", sum);
	return 0;

}