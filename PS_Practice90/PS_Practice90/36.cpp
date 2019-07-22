//36¹ø - Insertion Sort

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n, temp, j;
	int a[100];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 1; i < n; i++) {
		temp = a[i];
		for (j = i-1; j >=  0; j--) {
			if (a[j] > temp) 
				a[j + 1] = a[j];
			else 
				break;
			}
		a[j + 1] = temp;
	}
}


