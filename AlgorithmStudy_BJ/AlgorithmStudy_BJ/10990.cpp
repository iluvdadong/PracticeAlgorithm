// BJ 10990 º°Âï±â

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 0 ; i < N; i++) {
		
		for (int j = i; j < N - 1; j++) {
			printf(" ");
		}
		
		printf("*");
		
		for (int k = 0; k < (2 * i) - 1;k++) {
			printf(" ");
		}
		
		if (i >= 1) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}