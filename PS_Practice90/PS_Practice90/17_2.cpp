// 17¹ø - ¼±»ı´Ô ÄûÁî

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>

int main() {

	int N, num = 0, ans = 0;
	int res[10];
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d %d", &num, &ans);
		int sum = 0;

		for (int j = 1; j <= num; j++) {
			sum = sum + j;s
		}

		if (sum == ans) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}