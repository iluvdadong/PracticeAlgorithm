// 50¹ø - territory ¼±ÅÃ (small)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[51][51];

int main() {

	//freopen("input.txt", "rt", stdin);
	int h, w, n, m, sum, max=-999999999;
	scanf("%d %d", &h, &w);

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	scanf("%d %d", &n, &m);

	for (int i = 0; i < h-n+1; i++) {
		for (int j = 0; j < w-m+1; j++) {
			sum = 0;
			for (int k = i; k < i + n; k++) {
				for (int s = j; s < j + m; s++) {
					sum = sum + a[k][s];
				}
			}
			if (sum > max) max = sum;
		}
	}

	printf("%d\n", max);
}