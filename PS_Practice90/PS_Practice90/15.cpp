// 15�� - �Ҽ��� ���� (���� �ð� 1��)
// ���ѽð� �Ѿ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N, cnt=0;
	scanf("%d", &N);

	for (int i = 2; i <= N; i++) { //1�� �Ҽ��� �ƴ�
		//flag�� 1�̸� �Ҽ�
		int flag = 1;
		for (int j = 2; j < i; j++) {
			if(i%j == 0) {
				flag = 0;
				break;
			}
		}
		//������ 0�ΰ� ������ flag�� ������ 1 ��, �ش� i�� �Ҽ��̴�
		if (flag == 1) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}