//35¹ø - special sort (±¸±Û)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {

	int n, temp;
	int a[100];
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
		
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > 0 && a[j+1] < 0) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}