//23번 - 연속부분 증가수열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, cnt = 1, pre, now, max = -99999999;
	scanf("%d", &N);
	scanf("%d", &pre);

	for (int i = 1; i < N; i++) {
		scanf("%d", &now);
		if (now >= pre) cnt++;
		else cnt = 1;
		pre = now;

		if (max < cnt) max = cnt; 
		//실수로 빼먹지 말자
		//카운트 중에 가장 큰 수 저장해야함
		//작아지는 수 나오는 순간 cnt 는 다시 1이 되기 때문
	}

	printf("%d", max);
}