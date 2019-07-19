//34번 - 버블정렬

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>

int main() {

	int n, temp;
	int a[101];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) { //시작은 무조건 0부터
			if (a[j] > a[j + 1]) {
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;


}