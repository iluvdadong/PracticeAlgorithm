//84�� - �ް� DFS �ＺSW������ ���⹮��

#include <stdio.h>

int n, res = 0;
int t[20], p[20];

void DFS(int L, int sum) {
	if (L == n + 1) {
		if (sum > res) res = sum; //�ִ밪 ����� �� ã��
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