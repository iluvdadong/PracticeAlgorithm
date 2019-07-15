// 15번 - 소수의 개수 (제한 시간 1초)
// 제한시간 넘어버림
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, cnt=0;
	scanf("%d", &N);

	for (int i = 2; i <= N; i++) { //1은 소수가 아님
		//flag가 1이면 소수
		int flag = 1;
		for (int j = 2; j < i; j++) {
			if(i%j == 0) {
				flag = 0;
				break;
			}
		}
		//나눠서 0인게 없으면 flag는 여전히 1 즉, 해당 i는 소수이다
		if (flag == 1) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}