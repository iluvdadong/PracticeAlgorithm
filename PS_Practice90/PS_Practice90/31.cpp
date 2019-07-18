// 31번 - 탄화수소 질량

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {

	char input[10];
	int c = 0, h = 0, pos, i;
	scanf("%s", &input);

	//탄소의 개수를 구함
	if (input[1] == 'H') {
		c = 1;
		pos = 1; //H의 포지션이 1이라는 뜻
	}
	else {
		for (i = 1; input[i] != 'H'; i++) {
			c = c * 10 + (input[i] - 48); //숫자 char->int, 자릿수 붙이기 
		}
		pos = i; // H의 포지션
	} 

	//수소의 개수를 구함
	//만약에 H자리의 다음 것이 '\0'이면 H의 개수는 한개라는 말
	if (input[pos + 1] == '\0') h == 1;
	else {
		for (i = pos + 1; input[i] != '\0'; i++) {
			h = h * 10 + (input[i]-48);
		}
	}

	printf("%d\n", c * 12 + h);
	return 0;
}