//39�� - �� �迭 ��ġ�� (�̹� �������� �� ���� ������������ ��ġ��)

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

	while (p1<=n && p2<=m) { //������ �����Ǹ� ����
		if (a[p1] < b[p2]) {
			c[p3++] = a[p1++]; //���Կ����� �� ����++
		}
		else {
			c[p3++] = b[p2++];
		}
	}
	//������ �������� ���� �迭 ������� ����
	while (p1 <= n) c[p3++] = a[p1++]; 
	while (p2 <= m) c[p3++] = b[p2++];
	for (i = 1; i < p3; i++) { //p3�� ����ְ� �����ؼ� ������ �ڷ� �� �ڸ� ����Ŵ
		printf("%d ", c[i]);
	}
	return 0;
}