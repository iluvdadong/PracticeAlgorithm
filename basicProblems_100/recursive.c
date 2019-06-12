// 0612_recursive

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int recursive(int n);
int main(void) {

	int i;
	printf("type the number: ");
	scanf("%d", &i);
	recursive(i);
}

int recursive(int n) {
	int i;
	if (n < 1)
		return 2;
	else {
		i = (2 * recursive(n - 1)) + 1;
		printf("%d\n", i);
		return i;
	}
}
