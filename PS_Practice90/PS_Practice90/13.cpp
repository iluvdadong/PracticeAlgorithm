#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main() {

	int digit[10] = { 0, };
	int N, max = -9999999, res, temp;
	char num[101];

	scanf("%s", &num);
	for (int i = 0; num[i] != '\0'; i++) {
		temp = num[i] - 48; //문자형 숫자를 숫자형으로
		digit[temp]++;
	}
	
	for (int i = 0; i <= 9; i++) {
		if (digit[i] >= max) {
			max = digit[i];
			res = i;
		}
	}

	printf("%d", res);
}