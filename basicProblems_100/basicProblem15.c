// 수열 - 피보나치 수열의 합계
// 1+1+2+3+5+8+13+... 20번째 항까지의 합계
// 1) i = 20까지의 카운트
// 2) 각항까지의 계산 sum
// 3) 전체합계 total

#include <stdio.h>

main() {

	int sum, cnt, c;
	int a = 1, b = 1; //첫번째, 두번째 항

	sum = 2; //첫번째 두번째 항의 합
	cnt = 2; //2번째항까지 합산 완료

	while (1) {

		c = a + b;
		sum += c;
		cnt++;
		if (cnt < 20) { //피보나치 수열이기 때문에 계산한 값을 다시 a(첫째) b(둘째)에 대입하여 합산한 값을 다음항으로 해줘야 한다.
			a = b;
			b = c;
		}
		else {
			printf("%d", sum);
			break;
		}
	}


};