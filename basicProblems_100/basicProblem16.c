//소수 판별
// 어떤수 A가 소수인지 판별하려면 A를 2부터 A-1까지 차례대로 나누어 떨어지는지 검사한다.
// 나누어 떨어지는게 있을 시 MOD(X1,X2)==0 -> 소수 아님, 나누어 떨어지는게 없을 시 -> 소수 
// 1) A: 소수인지 판별하기 위해 입력받은 숫자가 저장될 변수
// 2) i: A보다 1 작은 수가 저장될 변수
// 3) J: 2부터 i까지 증가되는 숫자가 저장될 변수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

main() {

	int a, i, j;

	scanf("%d", &a);
	i = a - 1;
	j = 2;

	while (1) {
		if (j <= i) {
			if (a % j == 0) {
				printf("소수아님");
				break;
			} else {
				j++;
			}
		}
		else {
			printf("소수");
			break;
		}
	}

}