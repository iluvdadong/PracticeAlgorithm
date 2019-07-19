// 33번 - 3등의 성적은? selection sort in descending!

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	int n, count = 1;;
	int a[101];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n-1; i++) {
		int idx = i ,temp;
		for (int j = i+1; j < n; j++) {
			if (a[j] > a[idx]) idx = j;
		}
		temp = a[i];
		a[i] = a[idx];
		a[idx] = temp;
	}
	
	//공동 석차도 고려해야함
	//count 전역변수로 선언
	for (int i = 0; i < n; i++) {
		if (a[i] != a[i + 1]) count++;
		if (count == 3) {
			printf("%d", a[i + 1]);
			break;
		}
	}
	//for (int i = 0; i < n; i++)
		//printf("%d ", a[i]);
	//printf("\n%d", a[2]);
}