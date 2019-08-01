// 59번 - 부분집합 DFS 완전탐색

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>	

int n, ch[11];

void DFS(int L) {

	if(L==n+1) {
		for (int i = 1; i <= n; i++) {
			if (ch[i] == 1) printf("%d ", i);
		}
		puts("");
	}
	else {
		ch[L] = 1;
		DFS(L + 1);

		ch[L] = 0;
		DFS(L + 1);
	}
}

int main() {

	scanf("%d", &n);
	DFS(1); //level 1을 넘겨줌
}


