// 16�� - �Ƴ��׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>

//���ĺ� �ҹ���+�빮�� ��ģ �� (�񱳿�_
//�������� �����ϸ� 0�� ä��������
int a[60], b[60];

int main() {

	char str[100];
	int i;
	scanf("%s", &str);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {//�빮�ڸ�
			a[(str[i] - 64)]++;
		}
		else {
			a[(str[i] - 70)]++;
		}
	}

	scanf("%s", &str);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90) {//�빮�ڸ�
			b[(str[i] - 64)]++;
		}
		else {
			b[(str[i] - 70)]++;
		}
	}

	for (int i = 1; i <= 52; i++) //52�� ���ĺ� �ҹ��� �빮�� ���� ��
		if (a[i] != b[i]) {
			printf("NO");
			exit(0);
		}

	printf("YES");
}