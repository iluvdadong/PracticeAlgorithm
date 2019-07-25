// 43�� - ��������(���� �˰���)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int a[1001], n;

int Count(int s) {
	int sum = 0, count = 1;
	for (int i = 1; i <= n; i++) {
		if (sum+a[i] > s) {
			count++;
			sum = a[i];
		}
		else sum = sum + a[i];
	}
	return count;
}

int main() {

	freopen("input.txt", "rt", stdin);
	
	int m, i, lt = 1, rt = 0, mid, res;
	scanf("%d %d", &n, &m);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		rt = rt + a[i]; //rt == ��ü���ڸ� ���� ��
	}

	while (lt <= rt) {
	
		mid = (lt + rt) / 2;
		if (Count(mid) <= m) {
			res = mid;
			rt = mid - 1;
		}
		else lt = mid + 1;
	}

	printf("%d\n", res);
}