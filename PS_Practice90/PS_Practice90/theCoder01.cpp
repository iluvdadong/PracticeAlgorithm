// The Coder 01 - 점수계산(기본코딩)
// 완료 - 15분 소요

#include <stdio.h>

int main() {

	int n, a[101], check = 0, res =0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1; i <= n; i++) {
	
		if (a[i] == 1 && check == 0) {
			check++;
			res = res + 1;
		}
		else if (a[i] == 1 && check > 0) {
			check++;
			res = res + check;
		}
		else {
			check = 0;
		}
	}
	printf("%d", res);
	return 0;
}