// 66�� - ��������Ʈ�� ���ã�� (64���� ������ ����)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
using namespace std;

int n, ch[30], cnt = 0;
vector<int> map[30];

void DFS(int v) {

	if (v == n) cnt++; 
	else {
		for (int i = 0; i < map[v].size(); i++) {
		
			if (ch[map[v][i]] == 0) {//�湮���Ѱ�
				ch[map[v][i]] = 1;
				DFS(map[v][i]);
				ch[map[v][i]] = 0;
			}
		}
	}
}


int main() {

	//freopen("input.txt", "rt", stdin);

	int m, a, b;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++) {
		scanf("%d %d", &a, &b);

		//��������Ʈ ����
		map[a].push_back(b);
	}

	ch[1] = 1;
	DFS(1);
	printf("%d\n", cnt);


}