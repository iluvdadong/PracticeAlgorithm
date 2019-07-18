//29번 - 3의 개수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>	
#include <vector>
using namespace std;

int main() {
	
	int N, temp, digit, count=0;
	scanf("%d", &N);

	for (int i = 1; i < N; i++) {
		temp = i;
		while (temp > 0) {
			digit = temp % 10;
			if (digit == 3)count++;
			temp = temp / 10;
		}
	}

	printf("%d", count);
}