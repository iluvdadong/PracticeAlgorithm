// 72번 - 공주구하기 : 큐 자료구조로 해결

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {

	int n, k;
	queue<int> Q;

	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		Q.push(i);
	}

	//Q가 비어있을때까지
	while (!Q.empty()) {
		for (int i = 1;i < k; i++) { //k전까지 돌기
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();
		if (Q.size() == 1) { //1명 남았을 때
			printf("%d\n", Q.front());
			Q.pop();
		}
	}
	return 0;
}