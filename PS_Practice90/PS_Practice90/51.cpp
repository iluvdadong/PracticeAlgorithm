// 51번 - territory 선택 (large) 다이나믹 프로그래밍
// small 4중 for문에서 => 2중 for문으로


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[701][701];
int dy[701][701]; //추가

int main() {

	freopen("input.txt", "rt", stdin);
	int h, w, n, m, sum, max = -999999999;
	scanf("%d %d", &h, &w);

	//1부터 시작해야 이전 값 0을 더할 수 있음
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			scanf("%d", &a[i][j]);
			//추가: 읽으면서 dy테이블 만들기
			//주의: 현재값 a[i][j]를 더해주는 것 잊지말기
			dy[i][j] = dy[i - 1][j] + dy[i][j - 1] - dy[i - 1][j - 1] + a[i][j];
		}
	}

	scanf("%d %d", &n, &m);

	//시작을 2행 3열부터 해야함
	for (int i = n; i <=h; i++) {
		for (int j = m; j <=w; j++) {
			//주어진영역의 합
			sum = dy[i][j] - dy[i - n][j] - dy[i][j - m] + dy[i - n][j - m];
			if (sum > max) max = sum;
		}
	}

	printf("%d\n", max);
}