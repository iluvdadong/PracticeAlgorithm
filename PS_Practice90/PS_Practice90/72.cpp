// 72�� - ���ֱ��ϱ� : ť �ڷᱸ���� �ذ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {

	int n, k;
	queue<int> Q;

	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		Q.push(i);
	}

	//Q�� �������������
	while (!Q.empty()) {
		for (int i = 1;i < k; i++) { //k������ ����
			Q.push(Q.front());
			Q.pop();
		}
		Q.pop();
		if (Q.size() == 1) { //1�� ������ ��
			printf("%d\n", Q.front());
			Q.pop();
		}
	}
	return 0;
}