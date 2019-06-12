//수열: 1~100까지의 합

#include <stdio.h>

main() {
	int i, j;
	
	i = 0, j = 0;

	do {
		i++;
		j += i;
	} while(i<100);

	printf("%d %d",i, j);
}