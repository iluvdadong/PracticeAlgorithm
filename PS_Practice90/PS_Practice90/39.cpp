//39번 - 두 배열 합치기 (이미 오름차순 된 것을 오름차순으로 합치기)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int a[101], b[101], c[300];

int main() {

	int n, m, i ,p1=1, p2=1, p3=1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);

	scanf("%d", &m);
	for (i = 1; i <= m; i++)
		scanf("%d", &b[i]);

	while (p1<=n && p2<=m) { //한쪽이 거짓되면 끝남
		if (a[p1] < b[p2]) {
			c[p3++] = a[p1++]; //대입연산자 후 증가++
		}
		else {
			c[p3++] = b[p2++];
		}
	}
	//한쪽이 끝났으면 남은 배열 쓰러담는 과정
	while (p1 <= n) c[p3++] = a[p1++]; 
	while (p2 <= m) c[p3++] = b[p2++];
	for (i = 1; i < p3; i++) { //p3는 집어넣고 증가해서 마지막 자료 그 뒤를 가리킴
		printf("%d ", c[i]);
	}
	return 0;
}