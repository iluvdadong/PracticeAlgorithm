//6�� �ֻ��� 100�� ������ ���� �� ���� �� �迭�� ����

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {

	int array[6] = { 0, };
	int n, i = 0;
	srand(time(NULL));

	do {
		i++; 
		n = rand() % 6 + 1; //1~6����
		array[n - 1] += 1; //�ش� �ֻ��� ���� ���ö����� 1�� ����
	} while (i < 100);

	for (i = 0; i < 6; i++) {
		printf("[%d] = %d\n", i + 1, array[i]);
	}

}