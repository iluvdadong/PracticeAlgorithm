// 11�� - ������ �� ����(small)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, count = 0, temp;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {

		//temp�� i�� �� �־���� i�� �ٷ� �и��ϸ� �ȵ�
		temp = i;
		while (temp > 0) {
			temp = temp / 10;
			count++;
		}
	}

	printf("%d", count);

}

