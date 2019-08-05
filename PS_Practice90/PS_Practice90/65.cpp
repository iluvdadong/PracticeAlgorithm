//65�� - �̷�Ž��(DFS)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int map[8][8], check[8][8], cnt = 0;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void DFS(int x, int y) {

	int xx, yy;

	if (x == 7 && y==7) {
		cnt++;
	}
	else {
		for (int i = 0; i < 4; i++) {
			xx = x + dx[i];
			yy = y + dy[i];
			if (xx < 1 || xx>7 || yy < 1 || yy>7) continue;
		
			if (map[xx][yy] == 0 && check[xx][yy] == 0) {
				check[xx][yy] = 1;
				DFS(xx, yy);
				check[xx][yy] = 0;

			}
		}
	}
}

int main() {

	//freopen("input.txt", "rt", stdin);
	for (int i = 1; i <= 7; i++)
		for (int j = 1; j <= 7; j++)
			scanf("%d", &map[i][j]);

	check[1][1] = 1;
	DFS(1, 1);
	printf("%d\n", cnt);

	return 0;
}