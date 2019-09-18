#include <iostream>
char a[50];

int main() {

	int res = 0, cnt = 0;
	scanf("%s", &a);

	for (int i = 0; a[i] != '\0'; i++) {
	
		if (a[i] >= 48 && a[i] < 58) {
			res = res * 10 + (a[i] - 48);
		}
	}
	
	for (int i = 1; i <= res; i++) {
		if (res % i == 0) {
			cnt++;
		}
	}
	
	printf("%d\n %d\n", res, cnt);
}
