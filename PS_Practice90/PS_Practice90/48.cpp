// 48�� - �� ���� ��հ� ���� ����� ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int a[10][10];

int main() {

	freopen("input.txt", "rt", stdin);
	int sum = 0, avg, temp, res;

	for (int i = 1; i <= 9; i++) {
		sum = 0;
		for (int j = 1; j <= 9; j++) {
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
		avg = (sum / 9.0)+0.5;
		printf("%d ", avg);
		int min = 999999999;

		for (int j = 1; j <= 9; j++) {
			temp = abs(a[i][j]- avg);
			if (temp < min) {
				min = temp;
				res = a[i][j];
			}
			else if (temp == min) {
				if (a[i][j] > res)
					res = a[i][j];
			}
		}
		printf("%d\n", res);
	}
	return 0;
}
