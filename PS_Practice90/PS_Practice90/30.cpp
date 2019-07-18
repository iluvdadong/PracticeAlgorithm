//30번 - 3의 개수(large)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>	
#include <vector>
using namespace std;

int main() {

	int N, left, right, current, k=1, res = 0;
	//k는 자리수
	scanf("%d", &N);

	while (left > 0) {
		left = N/(k*10) ;
		right = N % k;
		current = (N / k) % 10;

		if (current > 3)
			res = res + ((left + 1) * k);
		else if (current == 3)
			res = res + (left * k) + (right + 1);
		else res = res + (left * k);

		k = k * 10;
	}
	return 0;
}