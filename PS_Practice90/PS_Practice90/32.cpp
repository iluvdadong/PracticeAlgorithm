// 32�� - �������� selection sort
// ���� ���� �� �����ؼ� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	
	int n, temp;
	scanf("%d", &n);
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if(a[j] < a[i]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	
	for(int i = 0;i<n; i++)
	printf("%d ", a[i]);

}