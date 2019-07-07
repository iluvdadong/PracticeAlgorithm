// 11번 - 숫자의 총 개수(small)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, count = 0, temp;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {

		//temp에 i를 꼭 넣어야함 i를 바로 분리하면 안됨
		temp = i;
		while (temp > 0) {
			temp = temp / 10;
			count++;
		}
	}

	printf("%d", count);

}

