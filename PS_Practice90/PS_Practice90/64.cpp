//64번 - 경로 탐색 DFS

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int map[30][30], ch[30], cnt=0, n;

void DFS(int v) {

	if (v == n) {
		cnt++;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (map[v][i] == 1 && ch[i] == 0) {
				ch[i] = 1;
				DFS(i);
				ch[i] = 0;
				//왜 체크를 풀어야 하나?
				//호출하고 되돌아 올때 0으로 해줘야 되돌아 거기 갈 수 있는 것
			}
		}
	}	
}

int main() {

	int m, a, b;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= m; i++) {
		
		scanf("%d, %d", &a, &b);
		map[a][b] = 1;
	}

	ch[1] = 1;
	DFS(1);
	printf("%d\n", cnt);
	return 0;

}