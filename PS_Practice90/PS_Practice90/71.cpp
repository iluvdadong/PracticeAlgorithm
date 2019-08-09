// 71�� - �۾��� ã�� BFS: ����Ʈ��Ž��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

//d[3] ���� �迭: �̵��ϸ� ���ذ��� ��ǥ�� ����
int ch[10001], d[3] = { 1, -1, 5 };

int main() {

	int s, e, x, pos;  //x:ť���� �̿�, pos: ������ġ
	scanf("%d %d", &s, &e);

	queue<int> Q;
	ch[s] = 1;
	Q.push(s);

	while (!Q.empty()) {
		x = Q.front();
		Q.pop();
		for (int i = 0; i < 3; i++) {
			pos = x + d[i];
			if (pos < 1 || pos > 10000) continue;
			if (pos == e) {
				printf("%d\n", ch[x]);
				exit(0);
			}
			if (ch[pos] == 0) {
				ch[pos] = ch[x] + 1; //ch�迭�� �Ÿ��迭�� ��
				Q.push(pos);					//ch[x]�� s���� x���� ���� �ּ� ����Ƚ���� ������
			}
		}

	}

	return 0;
}