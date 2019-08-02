//61번 - 특정 수 만들기
//+경우의 수 식 모두 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int n, m, a[11], count = 0, path[11];

void DFS(int L, int val) {

	if (L == n + 1) {
		if (val == m) {
			count++;
			for (int i = 1; i < L; i++) {
				printf("%d ", path[i]);
			}
			puts("");
		}
	}

	else {
		path[L] = a[L];
		DFS(L + 1, val + a[L]);

		path[L] = -a[L];
		DFS(L + 1, val - a[L]);

		path[L] = 0;
		DFS(L + 1, val); //얘를 빼먹음
	}
}

int main() {

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	DFS(1, 0);

	if (m == 0) printf("-1");
	else printf("%d", count);

	return 0;

}