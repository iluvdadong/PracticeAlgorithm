// 22번 - 온도의 최대값 (제한시간 1초)
// 1차원 배열 구간 합
// 시간복잡도 n으로 푸는 법 - 다이나믹 프로그래밍

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

int main() {

	int N, K, max, sum = 0;

	scanf("%d %d", &N, &K);

	vector<int> A(N); //1차원 배열 동적으로 잡음 //기본으로 배열 값 0으로 초기화돼있음

	for (int i = 0;i < N; i++) {
		scanf("%d", &A[i]);
	}

	for (int i = 0; i < K; i++) {
		sum += A[i];
	}

	max = sum;
	for (int i = K; i < N; i++) {
		sum = sum + (A[i] - A[i - K]); //다이나믹프로그래밍
		if (sum > max) max = sum;
	}
	
	printf("%d", max);
}
