// 24�� - Jolly Jumpers (�����ʿ�)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int N, pre, now, pos;
	scanf("%d", &N);

	vector<int> check(N); //�⺻���� 0������ �ʱ�ȭ �ǰ� 0~N-1������ ����

	scanf("%d", &pre);

	for (int i = 1; i < N; i++) {
		scanf("%d", &now);
		pos = abs(pre - now); //���밪
		if (pos > 0 && pos < N && check[pos] == 0)
			check[pos] = 1;
		else {
			printf("NO");
			return 0;
		}
		pre = now;
	}

	printf("YES\n");


}
