// The Coder 05 - 임시반장 정하기(기초 시뮬)
// 완료 - 30분 소요

#include <stdio.h>
int arr[1001][6];
int cnt[1001];

int main() {
	
	freopen("input.txt", "rt", stdin);
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= 5; i++) {
			
			int x = i;
			int y = j;

			for (int k = x+1; k <= n; k++) {
				if (arr[x][y] == arr[k][y]) {
					cnt[x++];
					cnt[k++];
				}
			}
		
		}
	}

	int max = -2147000000;

	for (int i = 1; i <= n; i++) {
		if (cnt[i] > max) max = cnt[i];
	}

	printf("%d", max);
	return 0;
}