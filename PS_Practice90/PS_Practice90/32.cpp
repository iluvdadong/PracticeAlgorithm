// 32�� - �������� selection sort
// ���� ���� �� �����ؼ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	int n, i, j, temp;
	scanf("%d", &n);
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++) { //n-1���� ���Ƶ� ��
		int idx = i;
		for (j = i + 1; j < n; j++) {
			if(a[j] < a[idx]) {
				idx = j;
			}
		}
		temp = a[i];
		a[i] = a[idx];
		a[idx] = temp;
	}
	
	for(int i = 0;i<n; i++)
	printf("%d ", a[i]);

}