// 1-2+3-4+5-6...+99-100

#include <stdio.h>

main() {
	int i, j, sw;
	
	i = j = 0;
	sw = 0;

	do {
		i++;
		if (sw == 0) { //0이면 +
			j += i;
			sw = 1; //다음순서는 -이므로 sw = 1로 만들어주기
		}
		else { //0 아니면 빼기
			j -= i; 
			sw = 0; //다음 순서는 + 이므로 sw = 0으로 만들어주기
		}
	} while (i < 100);

	printf("%d", j);
}

