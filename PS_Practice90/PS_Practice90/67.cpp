// 67번 - 최소비용 DFS 인접행렬 (가중치 방향그래프)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int n, a, b, c, map[30][30], ch[30], cost = 999999999;
//cost는 minimum value

void DFS(int v, int sum) {

	if (v == n) {
		if (sum < cost)
			cost = sum;
	}
	else {
		for (int i = 1; i <= n; i++) {
			//가중치 값이 있냐?  == 0보다 크냐
			if (map[v][i] > 0 && ch[i] == 0) {
				ch[i] = 1;
				DFS(i, sum + map[v][i]);
				ch[i] = 0;
			}
		}
	}

}

int main() {

	int m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = c;
	}

	ch[1] = 1;
	DFS(1, 0); //두번째 파라미터는 비용값
	printf("%d", cost);

	return 0;
}