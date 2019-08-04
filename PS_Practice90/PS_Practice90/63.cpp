//63번 - 인접행렬(가중치 방향그래프)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int map[51][51]; //인접행렬 : 정점의 개수 50개라고 예상

int main() {

	freopen("input.txt", "rt", stdin);
	int n, m, a, b, c; //정점의 개수 간선의 개수

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c; //a행에서 b열로 간다. 이때 간선의 비용값은 c다
		//map[a][b] = 1; //무방향 그래프일시
		//map[b][a] = 1; //무방향 그래프일시
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}