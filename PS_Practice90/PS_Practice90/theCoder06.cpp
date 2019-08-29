// The Coder 06 - 바둑이 승차(DFS: 부분집합)
// 실패 - 1시간 30분 도전

#include <stdio.h>
int arr[31], ch[31], res = 0, max = -2147000000;
int c, n;

void DFS(int x, int sum) {

	if (x == n+1) {
		if(res > max)
			max = res;
	}
	else {
		if (ch[x] == 0 && res < c)
			ch[x] = 1;
			DFS(arr[x + 1], sum + res);
			ch[x] = 0;
	}
}

int main() {

	freopen("input.txt", "rt", stdin);
	scanf("%d %d", &c, &n);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	ch[1] = 1;
	DFS(arr[1], 0);
	printf("%d", max);
}