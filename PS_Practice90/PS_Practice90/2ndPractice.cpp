#include <iostream>

int main() {

	int a, b, sum = 0;;
	scanf("%d %d", &a, &b);

	printf("%d", a);
	sum = sum + a;
	for (int i = a+1; i <= b; i++) {
		printf(" + %d", i);
		sum = sum + i;
	}

	printf(" = %d", sum);


}