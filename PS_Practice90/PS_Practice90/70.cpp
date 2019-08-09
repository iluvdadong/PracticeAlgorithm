//70�� - �׷��� �ִܰŸ�(BFS)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int ch[30], dis[30], n; //check�迭 �湮�ߴ��� ���ߴ���

int main() {
		
	freopen("input.txt", "rt", stdin);
	int m, a, b, x;
	
	scanf("%d %d", &n, &m);
	vector<int> map[30];
	queue<int> Q;

	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &a, &b);
		map[a].push_back(b); //��������Ʈ
	}

	//BFS Ž��
	Q.push(1);
	ch[1];

	while (!Q.empty()) {
	
		x = Q.front(); //���� �տ� �ִ� �ڷḦ x���� �־��� ��
		Q.pop(); //���� ������ ��
		for (int i = 0; i < map[x].size(); i++) {
			if (ch[map[x][i]] == 0) {
				ch[map[x][i]] = 1;
				Q.push(map[x][i]);

				dis[map[x][i]] = dis[x]+1;
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		printf("%d : %d\n", i, dis[i]);
	}
	return 0;
}