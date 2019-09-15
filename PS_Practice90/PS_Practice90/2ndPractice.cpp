#include <iostream>

int main() {


	freopen("input.txt", "rt", stdin);
	
	int n, a, min = 2147000000, max = -2147000000;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		if (a > max) max = a;
		if (a < min) min = a;
	}

	printf("%d", max - min);
	
}