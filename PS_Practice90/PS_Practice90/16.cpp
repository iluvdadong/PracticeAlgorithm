// 16번 - 아나그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>

//알파벳 소문자+대문자 합친 수 (비교용_
//전역으로 선언하면 0이 채워져있음
int a[60], b[60];

int main() {

	char str[100];
	int i;
	scanf("%s", &str);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {//대문자면
			a[(str[i] - 64)]++;
		}
		else {
			a[(str[i] - 70)]++;
		}
	}

	scanf("%s", &str);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {//대문자면
			b[(str[i] - 64)]++;
		}
		else {
			b[(str[i] - 70)]++;
		}
	}

	for (int i = 1; i <= 52; i++) //52는 알파벳 소문자 대문자 합한 수
		if (a[i] != b[i]) {
			printf("NO");
			exit(0);
		}

	printf("YES");
}