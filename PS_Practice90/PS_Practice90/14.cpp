#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int reverse(int x) {
	
	int result = 0, tmp;
	while (x > 0) {
		tmp = x % 10;
		result = result * 10 + tmp;
		x = x / 10;
	}
	return result;

}

bool isPrime(int x) {

	int i;
	if (x == 1)return false;
	bool flag = true;
	for (i = 2; i < x;i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}


int main() {

	int N, num, tmp;
	
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &num);
		tmp = reverse(num);
		if (isPrime(tmp)) printf("%d ",tmp);
	}
	return 0;
}