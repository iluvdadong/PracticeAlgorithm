// 20번 - 가위바위보

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm> 
int A[101];
int B[101];

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
		scanf("%d", &A[i]);

	for (int i = 1; i <= N; i++)
		scanf("%d", &B[i]);

	for (int i = 1; i <= N; i++) {
		if (A[i] == 1 && B[i] == 3 || A[i] == 2 && B[i] == 1 || A[i] == 3 && B[i] == 2)
			printf("A\n");
		else if (A[i] == B[i]) printf("D");
		else printf("B\n");
	}
	return 0;
}