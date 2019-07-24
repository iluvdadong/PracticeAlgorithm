//40번 - 교집합 (투포인트 알고리즘)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n, m, i, p1 = 0, p2 = 0, p3 = 0;

	scanf("%d", &n);
	vector<int> a(n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	scanf("%d", &m);
	vector<int> b(m), c(n + m);
	for (i = 0; i < m; i++)
		scanf("%d", &b[i]);

	//algorithm 내장함수 : 정렬
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	while (p1 < n && p2 < m) {
		if (a[p1] == b[p2]) {
			c[p3++] = a[p1++];
			p2++;
		}
		else if (a[p1] < b[p2]) p1++;
		else p2++;
	}

	for (i = 0; i < p3; i++)
		printf("%d ", c[i]);
}