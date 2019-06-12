//sum of odd numbers from 1 to 99
#include <stdio.h>

main() {

	int i = -1;
	int j = 0;

	do {

		i += 2;
		j += i;

	} while (i < 99);

	printf("%d", j);
}