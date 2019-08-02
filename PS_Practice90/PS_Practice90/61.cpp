//61¹ø - Æ¯Á¤ ¼ö ¸¸µé±â

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int n, m, a[11], count = 0;

void DFS(int L, int val) {

	if (L == n + 1) {
		if (val == m) count++;
	}
	else {
		DFS(L + 1, val + a[L]);
		DFS(L + 1, val - a[L]);
		DFS(L + 1, val); //¾ê¸¦ »©¸ÔÀ½
	}
}

int main() {

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	DFS(1, 0);

	if (m == 0) printf("-1");
	else printf("%d", count);

	return 0;

}