////53�� - K���� ��� (�����̿�) - STL���
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack> //stck STL ���
using namespace std;

int main() {

	int n, k;
	stack<int> s; //���� �ڷᱸ�� ����

	//16������ ����, 15�� str��15�� F�� ������ ���̴�.
	char str[20] = "0123456789ABCDEF";

	scanf("%d %d", &n, &k);

	while (n > 0) {
		s.push(n % k);
		n = n / k;
	}

	//s.empty: ������ ��������� ��(1)��ȯ ��������(0)	
	while (!s.empty()) { 
		//str�� char�迭�̱� ������ c�� ������ ��
		//s.top�� ������ �ڷḦ ������ ���ִ� ��
		printf("%c", str[s.top()]); 
		s.pop();//������ ��
	}

	return 0;
}
