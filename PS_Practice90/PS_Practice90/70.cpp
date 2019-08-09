//70번 - 그래프 최단거리(BFS)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int ch[30], dis[30], n; //check배열 방문했는지 안했는지

int main() {
		
	freopen("input.txt", "rt", stdin);
	int m, a, b, x;
	
	scanf("%d %d", &n, &m);
	vector<int> map[30];
	queue<int> Q;

	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b); //인접리스트
	}

	//BFS 탐색
	Q.push(1);
	ch[1];

	while (!Q.empty()) {
	
		x = Q.front(); //제일 앞에 있는 자료를 x값에 넣어준 것
		Q.pop(); //실제 꺼내는 것
		for (int i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i]] == 0) {
				ch[map[x][i]] = 1;
				Q.push(map[x][i]);

				dis[map[x][i]] = dis[x]+1;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		printf("%d : %d\n", i, dis[i]);
	}
	return 0;
}