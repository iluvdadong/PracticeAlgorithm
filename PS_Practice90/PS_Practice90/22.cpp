// 22번 - 온도의 최대값 (제한시간 1초)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int A[100000];

//반쪽자리 답 = time limit 걸리고 테스트케이스 절반 틀림
int main() {

	int N, K, max = -9999999, temp=0;
	
	scanf("%d %d", &N, &K);

	for (int i = 0;i < N; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < N; i++) {
		temp = 0;
		for (int j = i; j < i+K; j++) {
			temp = temp + A[j];
		}
		if (max < temp)
			max = temp;
	}

	printf("%d", max);
}
