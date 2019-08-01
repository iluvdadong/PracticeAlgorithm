//60�� - ���� ���� �κ����� DFS �Ƹ��� ���ͺ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
int n, a[11], total=0;
bool flag = false;

void DFS(int L, int sum) { //sum���� �κ����� �� ��Ʈ�� �Ұ���
	
	if (sum > total / 2) return; //2���� �κ����� ���� ���ƾ��ϴ� �����̻��� �� �� X
	if (flag == true) return;

	if (L == n+1) {
		if (sum == (total - sum)) {
			flag = true;
		}
	}
	else {
		DFS(L + 1, sum + a[L]); //level���� sum�� ����
		DFS(L + 1, sum); //level���� sum�� ���X
	}
}


int main() {

	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		total += a[i];
	}

	DFS(1, 0); //level�� ������ ���� �Ѿ
	if (flag == true) printf("YES");
	else printf("NO");

	return 0;
}