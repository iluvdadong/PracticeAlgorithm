// 21번 - 카드게임

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a[11];
	int b[11];
	int acount = 0, bcount = 0, lw = 0;;

	for (int i = 0;i < 10; i++)
		scanf("%d", &a[i]);

	for (int i = 0;i < 10; i++)
		scanf("%d", &b[i]);

	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) {
			acount += 3;
			lw = 1;
		}
		else if (a[i] < b[i]) {
			bcount +=3;
			lw = 2;
		}
		else {
			acount++;
			bcount++;
		}
	}

	printf("%d %d\n", acount, bcount);

	if (acount > bcount) printf("A");
	else if (bcount > acount) printf("B");
	else if (acount == bcount) {
		if (lw == 1) printf("A");
		else if (lw == 2) printf("B");
		else if (lw == 0) printf("D"); //이 조건 빼먹음
		}
	}