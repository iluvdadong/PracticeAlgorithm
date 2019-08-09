// 71번 - 송아지 찾기 BFS: 상태트리탐색

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

//d[3] 방향 배열: 이동하며 더해가며 좌표값 구함
int ch[10001], d[3] = { 1, -1, 5 };

int main() {

	int s, e, x, pos;  //x:큐에서 이용, pos: 현재위치
	scanf("%d %d", &s, &e);

	queue<int> Q;
	ch[s] = 1;
	Q.push(s);

	while (!Q.empty()) {
		x = Q.front();
		Q.pop();
		for (int i = 0; i < 3; i++) {
			pos = x + d[i];
			if (pos < 1 || pos > 10000) continue;
			if (pos == e) {
				printf("%d\n", ch[x]);
				exit(0);
			}
			if (ch[pos] == 0) {
				ch[pos] = ch[x] + 1; //ch배열은 거리배열도 됨
				Q.push(pos);					//ch[x]는 s에서 x까지 가는 최소 점프횟수가 들어가있음
			}
		}

	}

	return 0;
}