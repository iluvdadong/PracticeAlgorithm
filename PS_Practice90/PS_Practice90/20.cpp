// 20번 - 가위바위보

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>


int main() {

	int N, x, y;
	scanf("%d", &N);
	
	for (int i = 1; i <= N;i++) {
		scanf("%d %d", &x, &y);
		if (x == 1 && y == 3 || x == 2 && y == 1 || x == 3 && y == 2)
			printf("A\n");
		else if (x == y) printf("D");
		else printf("B\n");
	}

	return 0;
}