//23�� - ���Ӻκ� ��������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, cnt = 1, pre, now, max = -99999999;
	scanf("%d", &N);
	scanf("%d", &pre);

	for (int i = 1; i < N; i++) {
		scanf("%d", &now);
		if (now >= pre) cnt++;
		else cnt = 1;
		pre = now;

		if (max < cnt) max = cnt; 
		//�Ǽ��� ������ ����
		//ī��Ʈ �߿� ���� ū �� �����ؾ���
		//�۾����� �� ������ ���� cnt �� �ٽ� 1�� �Ǳ� ����
	}

	printf("%d", max);
}