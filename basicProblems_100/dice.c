//6면 주사위 100번 굴려서 나온 각 면의 수 배열에 저장

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {

	int array[6] = { 0, };
	int n, i = 0;
	srand(time(NULL));

	do {
		i++; 
		n = rand() % 6 + 1; //1~6까지
		array[n - 1] += 1; //해당 주사위 눈이 나올때마다 1씩 누적
	} while (i < 100);

	for (i = 0; i < 6; i++) {
		printf("[%d] = %d\n", i + 1, array[i]);
	}

}