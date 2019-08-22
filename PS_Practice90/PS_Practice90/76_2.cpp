// 76버 - 이항계수(메모이제이션) - DFS

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int dy[21][21]; //메모이제이션: 미리 계산한 것 저장용

int DFS(int n, int r) {
	//메모이제이션
	if (dy[n][r] > 0) return dy[n][r];
	if (n == r || r == 0) return 1;
	else {
		//메모이제이션 dy 2차원 배열에 계산 값 저장
		return dy[n][r] = DFS(n - 1, r - 1) + DFS(n - 1, r);
	}
}

int main() {

	//freopen("input.txt", "rt", stdin);
	int n, r;
	scanf("%d %d", &n, &r);

	printf("%d\n", DFS(n, r));
	
	return 0;
}
