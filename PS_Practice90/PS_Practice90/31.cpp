// 31�� - źȭ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() {

	char input[10];
	int c = 0, h = 0, pos, i;
	scanf("%s", &input);

	//ź���� ������ ����
	if (input[1] == 'H') {
		c = 1;
		pos = 1; //H�� �������� 1�̶�� ��
	}
	else {
		for (i = 1; input[i] != 'H'; i++) {
			c = c * 10 + (input[i] - 48); //���� char->int, �ڸ��� ���̱� 
		}
		pos = i; // H�� ������
	} 

	//������ ������ ����
	//���࿡ H�ڸ��� ���� ���� '\0'�̸� H�� ������ �Ѱ���� ��
	if (input[pos + 1] == '\0') h == 1;
	else {
		for (i = pos + 1; input[i] != '\0'; i++) {
			h = h * 10 + (input[i]-48);
		}
	}

	printf("%d\n", c * 12 + h);
	return 0;
}