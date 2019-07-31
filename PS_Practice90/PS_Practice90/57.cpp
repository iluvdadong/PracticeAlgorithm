// 57번 - 재귀함수 이진수 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

void recur(int x) {

	if (x == 0) return;
	else {
		recur(x/2);
		printf("%d", x%2);
	}
}

int main() {

	int n;
	scanf("%d", &n);
	recur(n);

	return 0;
}