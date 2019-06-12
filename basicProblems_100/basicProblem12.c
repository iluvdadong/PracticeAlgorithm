// -(1/2) + (2/3) - (3/4) + (4/5) - (5/6) ... -(99/100)

#include <stdio.h>

main() {

	float i = 0, j = 0;

	do {
	
		i++;
		if ((int)(i / 2) == i / 2) // 분자만 홀짝인지 확인 -> 짝수는 2로 나눴을때 int로 cast한거랑 결과가 같다.
			j += i / (i + 1); //분모는 분자 i 에서 1만 더해주면 됨
		else
			j -= i / (i + 1);

	} while (i < 99);

	printf("%f", j);

}