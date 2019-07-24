// 37�� - LRU īī�� ĳ�� ���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int s, n, a, pos;

	scanf("%d %d", &s, &n);
	vector<int> c(s); //ĳ�ð���

	for (int i = 0; i < n; i++) {
		scanf("%d", &a); //�� �ޱ�
		pos = -1; //hit or miss Ȯ�ο�
		for (int j = 0; j < s; j++) {
			if (a == c[j])//hit
				pos = j;
		}
		if (pos == -1) { //miss
			for (int j = s - 1; j >= 1; j--)
				c[j] = c[j - 1];
		}
		else { //hit
			for (int j = pos; j >= 1; j--) 
				c[j] = c[j - 1];
		}
		c[0] = a;
	}
	for (int i = 0; i < s; i++)
		printf("%d ", c[i]);

	return 0;
}
