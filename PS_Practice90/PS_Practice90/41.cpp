//41번 - 연속된 자연수의 합

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b = 1, cnt = 0, temp, i;
	
	scanf("%d", &a);
	temp = a;
	a--;
	
	while (a > 0) {
	
		b++;
		a = a - b;
		
		if (a % b == 0) {
			for (i = 1; i < b; i++) {
				printf("%d + ", a / b + i);
			}
			printf("%d = %d\n", a / b + i, temp);
			cnt++;
		}
	}
	
	printf("%d\n", cnt);

}