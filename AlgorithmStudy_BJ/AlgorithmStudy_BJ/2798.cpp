// BJ - 2798 / 0716

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a[101];
	int N, M, temp, max=-999999;

	scanf("%d %d", &N, &M);

	
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (a[i] + a[j] + a[k] <= M && i != j && j != k && k != i) {
					temp = a[i] + a[j] + a[k];
					if (temp > max) {
						max = temp;
					}
				}
			}
		}
	}
	printf("%d", max);
}

