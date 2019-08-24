//84번 - 휴가 DFS 삼성SW역량평가 기출문제

#include <stdio.h>

int n, res = 0;
int t[20], p[20];

void DFS(int L, int sum) {
	if (L == n + 1) {
		if (sum > res) res = sum; //최대값 경우의 수 찾기
	}
	else {
		if (L + t[L] <= n + 1)
			DFS(L + t[L], sum + p[L]);
		DFS(L + 1, sum);
	}
}

int main() {

	freopen("input.txt", "rt", stdin);
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &t[i], &p[i]);
	}

	DFS(1, 0);
	printf("%d", res);
	return 0;
}