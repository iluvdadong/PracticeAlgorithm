//53�� - K���� ��� (�����̿�)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stack[100], top = -1;

void push(int x) {
	stack[++top] = x;
}

int pop() {
	return stack[top--];
}

int main() {

	int n, k;

	//16������ ����, 15�� str��15�� F�� ������ ���̴�.
	char str[20] = "0123423789ABCDEF";

	scanf("%d %d", &n, &k);

	while (n>0) {
		push(n % k);
		n = n / k;
	}

	//pop�ؼ� top�� -1�� ������ ��, ���ÿ� �ִ� �ڷḦ ��� ���� ������ �ݺ�
	while (top != -1) {
		//str�� char�迭�̱� ������ c�� ������ ��
		printf("%c", str[pop()]);
	}
	
	return 0;
}