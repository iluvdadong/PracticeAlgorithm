//46�� - ��Ƽ�½�ŷ(īī�� �Թ� ���� ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int n, k, pos = 0, sec = 0, total=0;
	scanf("%d", &n);
	vector<int> a(n+1);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		total += a[i];
	}

	scanf("%d", &k);

	//����
	if (k >= total) {
		printf("-1\n");
		return 0;
	}

	while (1) {
		//A
		pos++;

		if (pos > n)
			pos = 1;

		if (a[pos] == 0) continue;
		//continue�� �Ʒ� �۾��� ���ϰ� �ݺ������� ���� A����

		a[pos]--;
		sec++;
		if (sec == k) break;
	}
	
	while (1) {
		pos++;
		if (pos > n) pos = 1;
		if (a[pos] != 0) break;
	}

	printf("%d", pos);
}