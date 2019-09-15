#include <iostream>

int main() {

	int n, m, sum =0;
	scanf("%d %d", &n, &m);

	for (int i = 1;i <= n; i++) {
		if (i % 3 == 0) {
			sum = sum + i;
		}
	}

	printf("%d", sum);
	return 0;
}