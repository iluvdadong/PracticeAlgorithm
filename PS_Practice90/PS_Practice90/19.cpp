// 19번 - 분노유발자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int a[100];

int main() {

	int N, count = 0, res = 0;
	scanf("%d", &N);
	
	for (int i = 0;i < N; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < N; i++) {
		count = 0;
		for (int j = i+1; j < N; j++) {
			if (a[i] > a[j])
				count++;
			else
			{
				count = 0;
				break;
			}
		}

		if (count != 0) res++;
	}
	printf("%d", res);
}