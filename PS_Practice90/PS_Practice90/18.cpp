// 18번 - 층간소음

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>

int main() {

	int N, M, a, count = 0, max = -9999999;

	scanf("%d %d", &N, &M);

	for (int i = 0;i < N; i++) {

		scanf("%d", &a);

		if (a > M) count++;
		else count = 0;

		if (count > max) max = count;
	}

	if (max < 1) printf("-1");
	else printf("%d", max); //실수로 카운트를 출력함

}

