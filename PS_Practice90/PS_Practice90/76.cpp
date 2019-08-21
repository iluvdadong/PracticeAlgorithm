// 76번 - 이항계수(메모이제이션)
// 팩토리얼 재귀문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int x) {
	
	if (x == 1) return 1;
	else return x * factorial(x - 1);
}

int main() {

	int n;
	scanf("%d", &n);
	
	printf("%d", factorial(n));
	
	return 0;
}