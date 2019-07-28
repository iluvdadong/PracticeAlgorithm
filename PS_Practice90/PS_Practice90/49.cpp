//49번 - 쌓기 블록의 최대값 (2차원 배열 응용)

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

	//for문 사용시 n부터 시작하면 i>=1로하는 걸 i<=1로 잘못 쓰는 실수함
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